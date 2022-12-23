#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @n: pointer
 * Return: char
 */
char *string_toupper(char *n)
{
	int u;

	u = 0;
	while (n[u] != '\0')
	{
		if (n[u] >= 'a' && n[u] <= 'z')
			n[u] = n[u] - 32;
		u++;
	}
	return (n);
}
