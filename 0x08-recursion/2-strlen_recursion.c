/*
 * File: 2-strlen_recursion.c
 * Auth: lady-ria
 */

#include "main.h"

/**
 * _strlen_recursion - Returns the lenth of a string
 * @s: The string to be measured
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}
