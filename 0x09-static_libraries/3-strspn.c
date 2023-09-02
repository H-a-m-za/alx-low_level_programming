#include "main.h"

/**
 * _strspn - gets length of prefix str.
 * @s: big string.
 * @accept: smol string.
 *
 * Return: nb of bytes of initial segment.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0;

while (*s != '\0' && *s != ' ')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
{
length++;
break;
}
a++;
}
if (*a == '\0')
{
break;
}
s++;
}

return (length);
}
