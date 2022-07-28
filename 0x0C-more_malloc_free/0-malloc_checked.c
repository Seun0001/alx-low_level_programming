#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptrtomem;

	ptrtomem = malloc(b);
	if (ptrtomem == NULL)
		exit(98);
	return (ptrtomem);
}
