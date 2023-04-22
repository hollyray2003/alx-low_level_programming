#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 *
 * sum_them_all - function to sum all
 * @n: integer argument
 * Return: returns sum
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list argSum;

	if (n == 0)
		return (0);
	va_start(argSum, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum = sum + va_arg(argSum, int);
	va_end(argSum);
	return (0);
}
