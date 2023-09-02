#include "main.h"
/**
 * _memset - fills the first n bytes of the memory with the constant byte.
 * @s: points to area of memory
 * @b: byte
 * @n: n bytes of memory
 * Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
