#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
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
	va_list argAdd;

	if (n == 0)
		return (0);
	va_start(argAdd, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(argAdd, int);
	va_end(argAdd);
	return (sum);
}
