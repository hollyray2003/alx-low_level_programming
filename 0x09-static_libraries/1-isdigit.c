#!/bin/bash
#include "main.h"

/**
 * _isdigit - checks if c is digit
 *
 * @c: character to check
 *
 * Return: boolean
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
