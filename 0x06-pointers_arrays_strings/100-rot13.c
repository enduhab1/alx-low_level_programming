#include "main.h"

/**
* rot13 - Encodes a string using the rot13 algorithm.
* @str: The input string to be encoded.
*
* Return: A pointer to the encoded string.
*/
char *rot13(char *str)
{
char *result = str;
char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; input[j] != '\0'; j++)
{
if (str[i] == input[j])
{
str[i] = output[j];
break;
}
}
}

return (result);
}

