#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * This is a user defined header file
 *
 */
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);
/**
 * print_alphabet - function to print alphabet
 *
 */
char *_strcat(char *dest, char *src);
/**
 *
 * *_strcat - function that concatenates two strings
 *
 */
char *_strncat(char *dest, char *src, int n);
/**
 *
 * *_strncat - function to concate n bytye
 *
 */
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
#endif
