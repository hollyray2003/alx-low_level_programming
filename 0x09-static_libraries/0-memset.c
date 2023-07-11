/**
 * _memset - to fill block of memory
 * @s: address member
 * @b: resulting value
 * @n: numbers
 *
 * Return: returning value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
