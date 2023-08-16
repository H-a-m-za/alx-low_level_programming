#include "main.h"

/**
 * _islower - checks for lowercase characters
 * param c: charcter to be checked
 *
 * Return: 1 if lowercase and 0 if not.
 */

int _islower(int c)

{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}


}
