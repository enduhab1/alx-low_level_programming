#include <stdio.h>

/**
* main - Prints the number of arguments passed
* @argc: The argument count
* @argv: Array of pointers to strings containing the arguments
*
* Return: Always 0
*/
int main(int argc, char *argv[])
{
(void)argv;  /* Suppress unused variable warning */

printf("%d\n", argc - 1);

return (0);
}

