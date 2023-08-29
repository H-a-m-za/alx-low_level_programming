#include "main.h"

/**
 * _strpbrk - searches string.
 * @s: string searched.
 * @accept: bytes searched for.
 *
 * Return: pointer to byte in s.
 */

char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
{
return (s);
}
a++;
}
s++;
}

return (0);
}
