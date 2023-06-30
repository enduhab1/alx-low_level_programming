#include <stdio.h>
#include "main.h"

/**
* print_hex_content - Prints the hexadecimal content of a buffer
* @b: Pointer to the buffer
* @start: Start index of the content to be printed
* @end: End index of the content to be printed
*/
void print_hex_content(char *b, int start, int end)
{
int i;
for (i = start; i < end; i++)
{
printf("%02x", b[i] & 0xff);
if (i % 2 != 0)
printf(" ");
}
}

/**
* print_ascii_content - Prints the ASCII content of a buffer
* @b: Pointer to the buffer
* @start: Start index of the content to be printed
* @end: End index of the content to be printed
*/
void print_ascii_content(char *b, int start, int end)
{
int i;
for (i = start; i < end; i++)
{
char c = b[i];
if (c >= 32 && c <= 126)
printf("%c", c);
else
printf(".");
}
}

/**
* print_buffer - Prints the content of a buffer
* @b: Pointer to the buffer
* @size: Size of the buffer
*/
void print_buffer(char *b, int size)
{
int i;

if (size <= 0)
{
printf("\n");
return;
}

for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);

/* Print hexadecimal content */
print_hex_content(b, i, i + 10);

printf(" ");

/* Print ASCII content */
print_ascii_content(b, i, i + 10);

printf("\n");
}
}

