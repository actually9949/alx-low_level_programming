#include <stdlib.h>

/**
 * malloc_checked - allocate memory using maloc
 *
 * @b: byte of memory to allocate
 *
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
