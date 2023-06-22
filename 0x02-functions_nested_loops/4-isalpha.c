#include "main.h"
/**
 * _islower - checks for either lowercase character or uppercase character
 * @c: the character to be checked
 * Return: 1 if c is lowercase or upper case, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 98) ||(c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
