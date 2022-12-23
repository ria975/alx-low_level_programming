#include "main.h"

/**
 * _strncat- joins two strings with n bytes
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int u;
	int v;

	u = 0;
	while (dest[u] != '\0')
	{
		u++;
	}
	v = 0;
	while (v < n && src[v] != '\0')
	{
		dest[u] = src[v];
		u++;
		v++;
	}
	dest[u] = '\0';
	return (dest);
}
