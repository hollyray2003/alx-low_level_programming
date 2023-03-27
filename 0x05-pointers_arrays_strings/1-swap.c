#include "main.h"

/**
 * swap_int - function that swaps integers
 *
 * @a: first integer variable
 * @b: second integer variable
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}
