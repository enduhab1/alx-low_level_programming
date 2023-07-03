#include <stddef.h>

/**
* _strstr - Locates the first occurrence of a substring in a string.
* @haystack: The string to search in.
* @needle: The substring to find.
*
* Return: Pointer to the beginning of the located substring,
*         or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}

while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;

while (*h == *n && *n != '\0')
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

return (NULL);
}

