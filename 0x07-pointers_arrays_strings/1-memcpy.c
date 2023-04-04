/**
 * _memcpy - function to copy memory
 * @dest: destination
 * @src: source
 * @n: number of times
 * Return: returns destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
