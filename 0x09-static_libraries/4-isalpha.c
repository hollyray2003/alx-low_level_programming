#!/bin/bash
#include "main.h"
/**
 * _isalpha - main function
 *
 * @c: character to compare
 *
 * Return: 1 if c is either a lowercase or uppercase letter, 0 if otherwise
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
