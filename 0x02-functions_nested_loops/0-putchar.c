#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - prints _putchar
 *
 * Return: 0 on success
 */
int main(void)
{
	char *n = "_putchar\n";
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		putchar(n[i]);
	}
	return (0);
}
