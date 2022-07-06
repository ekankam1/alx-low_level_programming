#include "main.h"
/**
 * print_sign - print the sign of a number
 *
 * @n: input as integer
 *
 * Return: 1 and print + , 0 and print 0 or -1 and print -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('0');
			return (0);
		}
	}
}
