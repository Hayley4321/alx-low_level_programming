#include "main.h"

/**
* print_alphabet_10 - Program that prints the alphabet 10 times
*
*/

void print_alphabet_x10(void)
{
<<<<<<< HEAD
       int a =0;

       while (a <= 9)
	{
		char letter;

=======
	int a = 0;
	
	while (a <= 9)
	{
		char letter;
>>>>>>> 90bf25d4ef27e48364c54da56e845fb7000f4c5d
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
		a++;
	}
}
