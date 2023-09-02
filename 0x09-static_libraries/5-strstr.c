#include "main.h"

/**
 * _strstr - Locates a substring within a string.
 * @haystack: Pointer to the string to search in.
 * @needle: Pointer to the substring to search for.
 *
 * Return: Pointer to the beginning of the substring, or 0 if not found.
 */

char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;

while (*n != '\0' && *h == *n)
{
h++;
n++;
}

if (*n == '\0')
{
return (haystack);
}

haystack++;
}

return (0);
}
