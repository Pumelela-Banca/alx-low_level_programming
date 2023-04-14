#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * main- entry point for a copying program
 *
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: void
 */

void main(int argc, char argv[])
{
    int fr_fd, to_fd;
    ssize_t n;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }
    fr_fd = open(argv[1], O_RDONLY);
    if (fr_fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }
    to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (to_fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close(fr_fd);
        exit(99);
    }
    while ((n = read(fr_fd, buffer, BUFFER_SIZE)) > 0)
    {
        if (write(to_fd, buffer, n) != n)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close(fr_fd);
            close(to_fd);
            exit(99);
        }
    }
    if (n == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        close(fr_fd);
        close(to_fd);
        exit(98);
    }
    if (close(fr_fd) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fr_fd);
        close(to_fd);
        exit(100);
    }
    if (close(to_fd) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
        exit(100);
    }
    return (0);
}
