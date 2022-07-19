#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagnals of a sq matrix
 *
 * @a: pointer to intger
 *
 * @size: int
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0, max = size * size, sum1 = 0, sum2 = 0;

	for (; i < max; i += size + 1)
		sum1 += a[i];
	for (i = size - 1; i < max - 1; i += size - 1)
		sum2 += a[i];
	printf("%d, %d\n", sum1, sum2);
}
