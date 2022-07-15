#include "main.h"
/**
 * reverse_array - reverses an array
 *
 * @a: integer argument
 *
 * @n: integer argument
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < (n - 1) / 2; i++)
	{
		tmp = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = tmp;
	}
}

