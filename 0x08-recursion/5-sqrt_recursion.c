#include "main.h"
/**
 * counter - function with two arguments
 *
 * @root: integer 1
 *
 * @n: integer 2
 *
 * Return: natural square root
 */
int counter(int root, int n)
{
	if (n == (root * root))
		return (root);
	else if (root == n || root == -n)
		return (-1);
	else
		return (counter(root + 1, n));
}
/**
 * _sqrt_recursion - return the natural square root
 *
 * @n: inter
 *
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (counter(0, n));
}
