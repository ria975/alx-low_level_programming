#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: is the number of elements in the array
 * @array: array to search in
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: returns the index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
