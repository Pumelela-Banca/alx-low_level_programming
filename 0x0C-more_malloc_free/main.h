#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n);

void *malloc_checked(unsigned int b);

void *_calloc(unsigned int nmemb, unsigned int size);

int *array_range(int min, int max);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

int _putchar(char c);

unsigned int _strlen_recursion(char *s);

char *strln(char *s1, char *s2, unsigned int n);
#endif