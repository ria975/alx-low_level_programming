/*
 * File: 4-pow_recursion.c
 * Auth: lady-ria
 */

#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power y
 * @x: the number to be raised
 * @y: the power.
 *
 * Return: the valuue of x raised to the value of y.
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
}
