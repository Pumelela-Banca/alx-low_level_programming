#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>


/*hdr_in prototype */
void hdr_ind(ELF64_Ehdr e_ident);

/*hdr_type prototype*/
void hdr_type(ELF64_Ehdr *hh)

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on error
 */

int main(int argc, char **argv)
{
	ssize_t x;
	ELF64_Ehdr hdr;
	int file;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	file = open(argv[1], O_RDONLY);
	if (file ==  -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
		exit(98);
	}
	x = read(file, &hdr, sizeof(hdr));
	if (n != sizeof(hdr))
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file - %s\n", argv[1]);
		close(fd);
		exit(98);
	}
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (n = 0; n < EI_NIDENT; n++)
		printf("%02x ", hdr.e_ident[n]);
	
	printf("\n  Class:                             ");
	printf("%s\n", hdr.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n", 
			hdr.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, 
			big endian" : "2's complement, little endian");
	printf("  Version:                           %d %s\n", 
			hdr.e_ident[EI_VERSION],
			hdr.e_ident[EI_VERSION] == EV_CURRENT ? "(current)" : "");
	printf("  OS/ABI:                            ");
	hdr_ind(&hdr);
	printf("\n  ABI Version:                       %d\n", ehdr.e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	hdr_type(&hdr);
	printf("\n  Entry point address:               %#lx\n", ehdr.e_entry);
	close(fd);
	return (0);
}

/**
 * hdr_type - prints type
 *
 * @hh: list
 *
 * Return: void
 */

void hdr_type(ELF64_Ehdr *hh)
{
	switch (hh.e_type)
	{
		case ET_NONE:
			printf("NONE (None)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknown>: %x", ehdr.e_type);
			break;
	}
}

/**
 *
 * hdr_ind - gets type of header
 *
 * @e_idt: index
 *
 * Return: void
 */

void hdr_ind(ELF64_Ehdr *e_idt)
{
	switch (e_idt.e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		default:
			printf("<unknown: %x>", ehdr.e_ident[EI_OSABI]);
			break;
	}
}
