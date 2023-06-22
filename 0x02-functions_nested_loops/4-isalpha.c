#include "main.h"
/**
 * _islower - checks for either lowercase character or uppercase character
 * @c: the character to be checked
 * Return: 1 if c is lowercase or upper case, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
