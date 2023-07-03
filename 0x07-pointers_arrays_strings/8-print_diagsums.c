#include <stdio.h>

/**
* print_diagsums - Prints sum of diagonals of a square matrix.
* @a: The square matrix as a 1D array.
* @size: The size of the square matrix.
*
* Description: Calculates and prints the sum of the main diagonal and the
* secondary diagonal of a square matrix of integers.
*/
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0; /* Sum of main diagonal */
int sum2 = 0; /* Sum of secondary diagonal */

/* Calculate sums of diagonals */
for (i = 0; i < size; i++)
{
sum1 += a[(size + 1) * i]; /* Main diagonal elements at (size + 1) * i */
sum2 += a[(size - 1) * (i + 1)];
/* Secondary diagonal elements at (size - 1) * (i + 1) */
}

/* Print sums of diagonals */
printf("%d, %d\n", sum1, sum2);
}

