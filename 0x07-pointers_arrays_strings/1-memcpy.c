#include "main.h"

/**
 * _memcpy - copies from memory.
 * @dest: paste dest.
 * @src: copy src.
 * @n: number of bytes copied.
 *
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return dest;
}
