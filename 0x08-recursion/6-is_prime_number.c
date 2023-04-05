#include "main.h"
/**
 * checker - function
 * @i: integer
 * @n: integer
 * Return: value
 */
int checker(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (checker(i + 1, n));
	return (1);
}
/**
 * is_prime_number - function to determine if prime
 * @n: integer
 * Return: boolean
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (checker(i, n));
}
