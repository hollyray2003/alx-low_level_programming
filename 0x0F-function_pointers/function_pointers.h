#ifndef FUNCTION_POINTERS_H_
#define FUNCTION_POINTERS_H_
/**
 * print_name - Function to print name
 * @*name: argument pointer for Name
 * @*f: argument poiter f
 * @*: argument pointer
 * returns: return
 *
 */
void print_name(char *name, void (*f)(char *));
#endif
