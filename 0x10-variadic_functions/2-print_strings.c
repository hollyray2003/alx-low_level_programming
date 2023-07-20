#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function to print string
 * @separator:  string to be printed between the strings
 * @n: strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list myList;
	char *strArg;

	va_start(myList, n);
	for (i = 0; i < n; i++)
	{
		strArg = va_arg(myList, char *);

		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (strArg == NULL)
			printf("(nil)");
		else
			printf("%s", strArg);
	}
	va_end(myList);
	printf("\n");
}

