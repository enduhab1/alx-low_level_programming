#include "main.h"
#include <stddef.h>

/**
* _strchr - locate a character in a string
* @s: pointer to the string to search in
* @c: character to locate
*
* Return: pointer to the first occurrence of the character c in s.
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}

/* Check for c at the end of the string ('\0') */
if (*s == c)
{
return (s);
}
return (NULL); /* Character not found */
}

