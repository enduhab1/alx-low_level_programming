#include "main.h"
/**
*_isdigit - check if 0 through 9 is digit
*@i: the number to be checked
*Return: 1 for digit number or 0 for any else
*/
int _isdigit(int i)
{
if (i >= 48 && i <= 57)
{
return (1);
}
else
{
return (0);
}
}
