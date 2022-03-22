#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: string output
 * Return: no return
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
