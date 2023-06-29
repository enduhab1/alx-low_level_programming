#include "main"
/**
 * _strcmp - Compares two strings lexicographically.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return:
 *   - An integer less than 0 if s1 is less than s2.
 *   - 0 if s1 is equal to s2.
 *   - An integer greater than 0 if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
int i;
i = 0;
while (s1[i] != '\n' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
