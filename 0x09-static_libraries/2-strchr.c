#include "main.h"

/**
 * *_strchr - a functions that locates a character in a string.
 * @s: the string from which he character is to be located.
 * @c: the character to be located.
 * Return: returns a pointer to the first occurence of the character
 * found in the string or NULL if it's not found.
 */

char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] >= '\0')
{
if (s[i] == c)
{
return (s + i);
}
i++;
}
return ('\0');
}
