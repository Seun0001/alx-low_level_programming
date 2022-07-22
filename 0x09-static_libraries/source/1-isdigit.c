#include "main.h"

/**
 * _isdigit - checks if parameter is a digit between 0 and 9
 * @c: input number
 * Return: 1 if digit between 0 and 9, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
