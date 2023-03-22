#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets 10 times
 *
 * Return: always 0;
 *
 */
void print_alphabet_x10(void)
{
	char i;
	char n;
	/**
	 * Variable i iterates to display the alphabets
	 *
	 * Variable n determines the number of times to print, in my case 10 times
	 *
	 */

	for (n = 0; n <= 9; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
