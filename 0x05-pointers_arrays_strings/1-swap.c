#include "main.h"
/**
 * swap_int - swaps the vaues of two integers
 *
 * @a: pointer input to an integer
 *
 * @b: pointer input to an integer
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int *hold;

	*hold = *a;
	*a = *b;
	*b = *hold;
}
