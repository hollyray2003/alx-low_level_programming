#include "main.h"
/**
 * _memset - funtion to set memory
 * @s: member of array to be set
 * @b: member of value to be set
 * @n: member number of times
 * Return:  s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
