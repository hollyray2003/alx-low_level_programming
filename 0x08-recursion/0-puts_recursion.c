#include "main.h"
/**
 * _puts_recursion - function for recursion
 * @s: argument or member
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}

