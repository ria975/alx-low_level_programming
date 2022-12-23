#include "main.h"

/**
 * _strncpy - copys a strings with n
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int v;

	v = 0;
	while (v < n && src[v] != '\0')
	{
		dest[v] = src[v];
		v++;
	}
	while (v < n)
	{
		dest[v] = '\0';
		v++;
	}

	return (dest);
}
