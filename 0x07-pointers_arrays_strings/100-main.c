#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program.
 *
 * Description:
 * This is the entry point of the program. It demonstrates the usage
 * of the set_string function by setting the value of a pointer to a char.
 * The original string is "Bob Dylan" and the new string is "Robert Allen".
 * It prints the original and updated strings before and after the update.
 *
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

