#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function to prin name
 * @*name: argument name pointer
 * @f: argument and pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
