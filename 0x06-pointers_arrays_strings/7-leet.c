#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: input
 * Return: the value of n
 */
char *leet(char *n)
{
	int u, v;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (u = 0; n[u] != '\0'; u++)
	{
		for (v = 0; v < 10; v++)
		{
			if (n[u] == s1[v])
			{
				n[u] = s2[v];
			}
		}
	}
	return (n);
}
