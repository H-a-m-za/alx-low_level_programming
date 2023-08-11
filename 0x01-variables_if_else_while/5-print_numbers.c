#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - prints base 10 numbers.
 *
 * Return: 0 on success
 */
int main(void)
{
int n;

for (n = 0; n <= 9; n++)
{
printf("%d", n);
}
putchar('\n');
return (0);
}
