#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - realloc old ptr to new
 * @ptr: old one
 * @old_size: old size of pointer
 * @new_size: new size of pointer
 * Return: void *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *babypointer;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	babypointer = malloc(sizeof(char) * new_size);
	if (babypointer == NULL)
		return (NULL);
	if (ptr)
	{
		for (i = 0; i < old_size; i++)
		{
			babypointer[i] = *((char *)ptr + i);
		}
	}
	free(ptr);
	return (babypointer);
}
