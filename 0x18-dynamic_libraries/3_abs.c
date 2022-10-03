#include "main.h"
#include <stdio.h>
/**
* _abs - absolute value of the given number
* @n: the number to be returned positive
* Return: the number with absolute value applied to it
*/
int _abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (n * -1);
}
