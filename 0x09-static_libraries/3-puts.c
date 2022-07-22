#include "holberton.h"
/**
 * _puts - print a string
 * @str: A pointer to an int that will be changed
 * Return: void
 */
void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return;
}
