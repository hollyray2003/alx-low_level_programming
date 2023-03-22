#include "main.h"
/**
 * print_sign - main function
 *
 * @n: character to compare
 *
 * Return: +1 if n is greater than zero, 0 if zero, -1 if  less than zero
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
