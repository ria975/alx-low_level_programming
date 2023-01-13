#include "main.h"

/**
 * array_range - creates an array of integer
 * @max: maximum
 * @min: minimum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *arr, u = 0, v = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (0);
	while (u <= max - min)
		arr[u++] = v++;
	return (arr);
}
