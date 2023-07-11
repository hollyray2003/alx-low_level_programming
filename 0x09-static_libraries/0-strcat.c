#!/bin/bash
#include "main.h"
#include <string.h>
/**
 * _strcat - To concat two strings
 * @dest: destination
 * @src: source
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
    char *p = dest + strlen(dest);
    while (*src)
    {
        *p++ = *src++;
    }
    *p = '\0';
    return (dest);
}
