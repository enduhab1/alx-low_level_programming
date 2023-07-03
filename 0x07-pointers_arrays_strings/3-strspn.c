#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: pointer to the string to search in
* @accept: pointer to the string of accepted characters
*
* Return:number of bytes the initial segment s consisting  bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0;
int i, j;
int found;

for (i = 0; s[i] != '\0'; i++)
{
found = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
length++;
found = 1;
break;
}
}
if (!found)
{
break;
}
}

return (length);
}

