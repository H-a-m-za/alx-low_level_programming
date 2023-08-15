#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * main - prints alphabet.
 *
 * return: 0 on success
 */
int main(void)
{
        char c;

	for(c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
return (0);
}
