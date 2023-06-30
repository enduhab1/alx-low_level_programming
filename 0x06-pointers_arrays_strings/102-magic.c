#include <stdio.h>

/**
* main - Entry point of the program
*
* Return: Always 0
*/
int main(void)
{
int a[] = {0, 1, 2, 3, 4};
int *p = a + 2;

printf("a[2] = %d\n", *(&a[0] + 2));

return (0);
}

