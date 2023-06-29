/**
* string_toupper - Converts all lowercase letters in a string to uppercase.
* @str: The string to be modified.
*
* Return: A pointer to the modified string.
*/
char *string_toupper(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
}

return (str);
}

