#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int u;
	int v;

	for (u = 0; u < n; u++)
	{
		n--;
		v = a[u];
		a[u] = a[n];
		a[n] = v;
	}
}
