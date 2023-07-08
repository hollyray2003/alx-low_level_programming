#include "main.h"
/**
 * factorial - function to find factorial
 * @n: number to find its factorial
 * Return: returns  -1 if error or 0 if <0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}

