#include "main.h"

/**
 * _strcat - concatennates two strings
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int u;
	int v;

	u = 0;
	while (dest[u] != '\0')
	{
		u++;
	}
	v = 0;
	while (src[v] != '\0')
	{
		dest[u] = src[v];
		u++;
		v++;
	}
	dest[u] = '\0';
	return (dest);
}
