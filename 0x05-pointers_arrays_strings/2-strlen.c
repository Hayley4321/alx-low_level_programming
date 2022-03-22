#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: String variable
 * Return: length of string
 */

int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
