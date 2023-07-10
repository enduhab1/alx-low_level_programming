#include <stdio.h>
#include <stdlib.h>

/**
* main - Adds positive numbers
* @argc: The argument count
* @argv: Array of pointers to strings containing the arguments
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
int i, number, sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
char *ptr = argv[i];

while (*ptr)
{
if (*ptr < '0' || *ptr > '9')
{
printf("Error\n");
return (1);
}
ptr++;
}

number = atoi(argv[i]);
if (number <= 0)
{
printf("Error\n");
return (1);
}

sum += number;
}

printf("%d\n", sum);
return (0);
}

