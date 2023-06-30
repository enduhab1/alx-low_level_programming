#include "main.h"
#include <string.h>

char *reverse_string(char *str);

/**
* infinite_add - Adds two numbers.
* @n1: The first number as a string.
* @n2: The second number as a string.
* @r: The buffer to store the result.
* @size_r: The size of the buffer.
*
* Return: A pointer to the result string, or 0 if the result cannot be stored.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);
int carry = 0;
int sum = 0;
int i = 0;

if (len1 >= size_r || len2 >= size_r)
return (0);

len1--;
len2--;
size_r--;

while (len1 >= 0 || len2 >= 0 || carry)
{
if (len1 >= 0)
sum += (n1[len1] - '0');
if (len2 >= 0)
sum += (n2[len2] - '0');

sum += carry;

if (i >= size_r)
return (0);

if (sum > 9)
{
carry = 1;
sum -= 10;
}
else
{
carry = 0;
}

r[i++] = sum + '0';
sum = 0;

if (len1 >= 0)
len1--;
if (len2 >= 0)
len2--;
}

r[i] = '\0';
reverse_string(r);

return (r);
}

/**
* reverse_string - Reverses a string.
* @str: The string to be reversed.
*
* Return: A pointer to the reversed string.
*/
char *reverse_string(char *str)
{
int i, j;
char temp;

for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
{
temp = str[i];
str[i] = str[j];
str[j] = temp;
}

return (str);
}

