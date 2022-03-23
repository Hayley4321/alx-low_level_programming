#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: string pointer
 * Return: void
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;
	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
