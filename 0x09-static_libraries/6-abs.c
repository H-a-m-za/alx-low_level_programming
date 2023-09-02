#include "main.h"

/**
 * _abs - computes absolute value of integer.
 * @n: integer.
 *
 * Return: absolute value of int.
 */

int _abs(int n)

{
	if (n >= 0)
	{
		return (n);
	}
	else
		return (-1 * n);
}
