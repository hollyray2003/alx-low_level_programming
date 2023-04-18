#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * create_array - function to create array
 * @size: size argument
 * @c: c argument variable
 * Return: returns
 *
 */
char *create_array(unsigned int size, char c);
/**
 * strtow - function string to words
 * @str: string to go to words
 * Return: returns char
 */
/**
 * strdup - function string
 * @str: string arguement
 * Retun: returns
 *
 */
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
char **strtow(char *str);
/**
 * argstostr - function args to strings
 * @ac: int arguments member
 * @av: char arguments
 * Return: char array
 */
char *argstostr(int ac, char **av);

#endif
