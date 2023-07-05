#include <stdio.h>

/**
* set_string - Sets the value of a pointer to a char.
* @s: Pointer to a pointer to a char.
* @to: Pointer to a char.
*
* Description: This function sets the value of the pointer @s to the address
*   pointed to by @to.
*/
void set_string(char **s, char *to)
{
*s = to;
}
/**
* main - Entry point of the program.
*
* Description:
*This is the entry point of the program. It demonstrates the usage
*of the set_string function by setting the value of a pointer to a char.
*The original string is "Hello, World!" and the new string is "New String".
*t prints the original and updated strings before and after the update.
* Return: Always 0.
*/
int main(void)
{
char *name1 = "Bob Dylan";
char *name2 = "Robert Allen";

printf("%s, %s\n", name1, name2);

set_string(&name2, name1);

printf("%s, %s\n", name1, name2);

return (0);
}
