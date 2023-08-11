#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/* more headers goes there */

/**
 * main - prints the alphabet in uppercase and lowercase.
 *
 * Return: 0 on success
 */
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
	putchar(character);
	}
	for (character = 'A'; character <= 'Z'; character++)
	{
	putchar(character);
	}
	putchar('\n');
	return (0);
}
