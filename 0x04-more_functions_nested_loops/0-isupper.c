#include "main.h"

/**
 * _isupper - checks if char is uppercase.
 * @c: character.
 *
 * Return: 1 if c upper, 0 if not.
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
