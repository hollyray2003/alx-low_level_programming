#include "main.h"
/**
 * jack_bauer - main function voided
 *
 */
void jack_bauer(void)
{
	int i;
	int n;

	for (i = 0; i <= 23; i++)
	{
		for (n = 0; n <= 59; n++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar('\n');
		}
	}
}
