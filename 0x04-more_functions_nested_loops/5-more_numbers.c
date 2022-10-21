#include "main.h"

/**
 *
 *  more_numbers - function prints 10 times the numbers, from 0 to 14
 *
 *  followed by a new line
 *
 *  Description: Can only use _putchar 3 times
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	        if (i != 2 && i != 4)
		{
	             _putchar(i + '0');															
		}
	}

	_putchar('\n');
}


