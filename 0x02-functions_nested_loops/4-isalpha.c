#include "main.h"

/**
 * _isalpha(int c) - checks for alphabetic character
 * @c: input to be checked
 *
 * Return: Returns 1 if c is a letter, lowercase or uppercase returns 0 otherwise
 */

int _isalpha(int c)

{
	if ((c <= 'a' && c >= 'z') && (c <= 'A' && c >= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
