#include <stdio.h>
#include "main.h"

/**
 *  _atoi - converts a string to an integer
 *  @s: string to be converted
 *
 *  Return: the int converted from the string
 */
int check_num(char *str)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (src[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (src[i] == '-')
			++d;

		if (src[i] >= '0' && src[i] <= '9')
		{
			digit = src[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			if (src[i + 1] < '0' || src[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);

	return (n);
}
