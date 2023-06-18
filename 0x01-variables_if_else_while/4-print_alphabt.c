#include <stdio.h>
/**
*main -entery point
*Descripition - "To print the lowercase alphabet except the 'e' and 'q',"
*Return: (0); Success
*/
int main(void)
{
int n = 97;
while (n <= 122)
{
if (n != 101 && n != 113)
{
putchar(n);
}
n++;
}
putchar('\n');
return (0);
}
