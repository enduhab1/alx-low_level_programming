#include "main.h"
/**
* more_numbers - Prints each number from 0 to 14, repeated 10 times.
*Return: 10 times of the number since from 0 up to 14
*/
void more_numbers(void)
{
int i, j;

for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
{
_putchar(i / 10 + '0');
}
_putchar(i % 10 + '0');
}

_putchar('\n');
}
}

