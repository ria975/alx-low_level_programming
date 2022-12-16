#include "main.h"

/**
 *isupper - checks if parameter is an uppercase character.
 *@c: input character.
 *Return: 1 if it is an uppercase character, 0 if otherwise.
 */
int _isupper(void)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
