#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range -a function that creates an array of integers
 * @min: lower end of values
 * @max: upper end
 * Return: int *
 */
int *array_range(int min, int max)
{
	int *babyarray;
	int i;

	if (min > max)
		return (NULL);
	babyarray = malloc(sizeof(int) * (max - min + 1));
	if (babyarray == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		babyarray[i] = min;
		min++;
	}
	return (babyarray);

}
