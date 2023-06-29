#include "main.h"
#include <ctype.h>

/**
* cap_string - Capitalizes all words in a string.
* @str: The string to be modified.
*
* Return: A pointer to the modified string.
*/
char *cap_string(char *str)
{
int i;

/* Capitalize the first character if it's a letter */
if (str[0] >= 'a' && str[0] <= 'z')
str[0] -= 32;

for (i = 1; str[i] != '\0'; i++)
{
/* Check for separators and capitalize the following letter */
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
str[i + 1] -= 32;
}
}

return (str);
}

