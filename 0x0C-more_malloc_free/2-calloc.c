#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: how many members
 * @size: how big arrays in bytes
 * Return: void *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)pointer + i) = 0;
	}
	return (pointer);

}
