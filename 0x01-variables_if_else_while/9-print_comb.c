#include <stdio.h>
/**
*main - entery point
*Descripition: - to print the combination single digit number.
*Return: (0) success.
*/
int main(void)
{
int n;
for (n = 48; n <= 57; n++)
{
putchar(n);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
