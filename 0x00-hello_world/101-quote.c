#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: A program that prints a line to the standard error.
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	fputs("and that piece of art  useful\" - Dora Korpar, 2015-10-19\n", stderr);
	return (1);
}
