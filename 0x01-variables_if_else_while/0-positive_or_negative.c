#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * This is the entry point of the program.
 *
 * @return 0 on success.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	// Check number and print the number's status.
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		if (n == 0)
		{
		printf("%d is zero\n", n); }
		else
		{
		printf("%d is negative\n", n);
		}
	}
	// Return 0 on success.
	return (0);
}
