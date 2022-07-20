#include "main.h"

/**
 * _strlen - returns the lenth of a string
 *
 * @s: A string to be tested
 *
 * Return: int len (length of string)
 */

int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
{
len++;
}
return (len);
}
