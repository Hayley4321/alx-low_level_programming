#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string variable
 * Return: void
 */

void puts_half(char *str)
{
	int l, m, a;

	while (str[l] != '\0')
	{
		l++;
	}
	m = l / 2;
	if (l % 2 == 0)
	{
		for (a = m-1; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}
	else
	{
		m = (l - 1) / 2;
		for (a = m-1; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}

