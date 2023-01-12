#include "main.h"
/**
 * malloc_checked - array for prints a string
 * @c: number of memory
 * Return: void
 */

void *malloc_checked(unsigned int c)
{
void *p;

p = malloc(c);
if (p == NULL)
{
exit(98);
}

return (p);
}
