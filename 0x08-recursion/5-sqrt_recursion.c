#include "main.h"

/**
 * check - function to check for the square root
 * @a:integer a
 * @b:integer b
 *
 * Return: returns an integer
 */
int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - function to find squar root
 * @n: arguement variable to find its root
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}

