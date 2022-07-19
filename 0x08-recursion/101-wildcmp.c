#include "main.h"

/**
 * wildcmp - compares two strings and return 1 if identical
 * @s1: normal string
 * @s2: string that can contain *
 * Return: 1 if identical and 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
if (*s2 == '\0' && *s1 == '\0')
return (1);
if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
return (0);
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

return (0);
}
