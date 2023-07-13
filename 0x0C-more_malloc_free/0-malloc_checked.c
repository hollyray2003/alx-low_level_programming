#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function malloc
 * @b: integer to check
 * Return: a pointer or void
 */
void *malloc_checked(unsigned int b)
{
	int *mem = malloc(b);
	if (mem == NULL)
		exit(98);

	return (mem);
}

