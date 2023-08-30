#include "main.h"

/**
 * factorial - returns factorial.
 * @n: number.
 *
 * Return: factorial of n and -1 in case of error.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n  * factorial(n - 1));
	}
}
