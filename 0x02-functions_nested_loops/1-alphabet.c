#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase followed by a new line
 *
 * Return: Always 0
 */

int print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
	return (0);
}
