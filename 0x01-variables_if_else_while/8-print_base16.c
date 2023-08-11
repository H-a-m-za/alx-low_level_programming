#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - prints numbers in base 16.
 *
 * Return: 0 on success
 */
int main(void)
{
int n;
char m;

for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
for (m = 'a'; m <= 'f'; m++)
{
putchar(m);
}
putchar('\n');
return (0);
}
