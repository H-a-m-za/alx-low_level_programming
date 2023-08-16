#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: number to be checked.
 *
 * Return: 1, 0 or -1 if pos, 0 or neg.
 */
int print_sign(int n)

{
if (n > 0)
{
	_putchar(43);
	return (1);
}
else if (n == 0)
{
	_putchar(48);
	return (0);
}
else
{
	_putchar(45);
	return (-1);
}
}
