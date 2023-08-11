#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
//git add . && git commit -m 'ah damn' && git push
/**
 * main - prints the alphabet in lowercase without q and e.
 *
 * Return: 0 on success
 */
int main(void)
{
char character;

for (character = 'a'; character <= 'z'; character++)
{
	if (character != 'q' && character != 'e')
	{
	putchar(character);
	}
}
putchar('\n');
return (0);
}
