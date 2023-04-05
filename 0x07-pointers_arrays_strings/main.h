#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * This is a user defined
 * header file
 *
 */
char *_memset(char *s, char b, unsigned int n);
/**
 * *_memset - Function that sets memory
 * @*s: member
 * @*b : member
 * @*n: member
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * *_memcpy - function
 * @*dest: member of memory destination
 * @*src: member source memory
 * @*n: member number of times
 */
char *_strchr(char *s, char c);
/**
 * *_strchr - function
 * @*s: member variable
 * @*c: member variable
 */
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
int _putchar(char c);
void print_diagsums(int *a, int size);

#endif

