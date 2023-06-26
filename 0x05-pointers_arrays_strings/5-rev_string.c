#include "main.h"
/**
* rev_string - Reverses a string.
* @s: Pointer to the string to be reversed.
*
* Return: None.
*/
void rev_string(char *s)
{
int i, j;
char temp;

/* Calculate the length of the string */
int length = 0;
while (s[length] != '\0')
length++;

/* Swap characters from start and end of the string */
for (i = 0, j = length - 1; i < j; i++, j--)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}

