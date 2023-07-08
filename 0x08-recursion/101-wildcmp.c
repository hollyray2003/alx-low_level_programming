#include "main.h"

/**
 * str_checker - function to check if two strings are the same.
 * @s1: string 1
 * @s2: string 2
 * @i: index 1
 * @j: index 2
 * Return: returns
 */
int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp - function to check if strings is really the same
 * @s1: string 1
 * @s2: string 2
 *
 * Return: returns
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}

