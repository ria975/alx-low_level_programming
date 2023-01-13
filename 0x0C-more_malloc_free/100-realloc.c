#include "main'h"

/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *bloom, *realloc;
	unsigned int u;

	if (ptr != NULL)
		bloom = ptr;
	else
	{ return (malloc(new_size)); }
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	realloc = malloc(new_size);
	if (realloc == NULL)
		return (0);
	for (u = 0; u < (old_size || u < new_size); u++)
	{
		*(realloc + u) = bloon[u];
	}
	free(ptr);
	return (realloc);
}
