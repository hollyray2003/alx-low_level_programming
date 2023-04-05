#include "main.h"
/**
 * _pow_recursion - function to give power of value
 * @x: integer value
 * @y: power of value
 * Return: integer value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
