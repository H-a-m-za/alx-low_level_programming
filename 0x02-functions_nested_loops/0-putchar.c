#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - prints _putchar
 *
 * return: 0 on success
 */
int main(void)
{
	char* n = "_putchar\n";

	for (int i = 0; n[i]!='\0'; i++)
	{
		putchar(n[i]);
	}
	return 0;
}
