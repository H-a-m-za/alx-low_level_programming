#include "main.h"

/**
 * prrint_numbers - prints numbers 0 to 9.
 *
 * Return: void.
 */

void print_numbers(void)

{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
