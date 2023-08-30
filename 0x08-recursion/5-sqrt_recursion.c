#include "main.h"
/**
 * _sqrt_recursion_helper - sqrt.
 * @n: number.
 * @start: start.
 * @end: end.
 * Return: sqrt(n) or -1.
 */
int _sqrt_recursion_helper(int n, int start, int end)
{
int mid;

if (start > end)
{
return -1;
}

mid = start + (end - start) / 2;

if (mid * mid == n)
{
return mid;
}
else if (mid * mid < n)
{
return (_sqrt_recursion_helper(n, mid + 1, end));
}
else
{
return (_sqrt_recursion_helper(n, start, mid - 1));
}
}

/**
 * _sqrt_recursion - sqrt.
 * @n: number.
 *
 * Return: sqrt(n) or -1.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return -1;
}
return (_sqrt_recursion_helper(n, 0, n));
}
