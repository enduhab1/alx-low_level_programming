#include "main.h"
/**
* _strncat - Concatenates two strings, using at most n bytes from src.
* @dest: Pointer to the destination string.
* @src: Pointer to the source string.
* @n: Maximum number of bytes to concatenate from src.
*
* Return: Pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int i = 0;

/* Find the length of the destination string */
while (dest[dest_len] != '\0')
dest_len++;

/* Append at most n bytes from the source string to the destination */
while (src[i] != '\0' && i < n)
{
dest[dest_len] = src[i];
dest_len++;
i++;
}

dest[dest_len] = '\0'; /* Add the terminating null byte */

return (dest);
}

