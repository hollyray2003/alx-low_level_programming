#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function malloc
 * @b: integer to check
 * Return: a pointer or void
 */
void *malloc_checked(unsigned int b)
{
	int *mem = malloc(b);
	if (mem == 0)
		exit(98);

	return (mem);
}
