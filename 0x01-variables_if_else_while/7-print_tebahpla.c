#include <stdio.h>

/**
 * main - prints alphabets in reverse
 * followed by  new line
 * Return: 0 if (successful)
*/

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
