#include "main.h"

/**
 * print_most_numbers - print all numbers cept 2 and 4.
 *
 * Return: always 0.
 */

void print_most_numbers(void)

{
	int i;

	for (i = 48; i <= 47; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar(10);
}	
