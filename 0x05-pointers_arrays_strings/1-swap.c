#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: first parameter
 * @b: second parameter
 * Return: nothing to return
 */

void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
