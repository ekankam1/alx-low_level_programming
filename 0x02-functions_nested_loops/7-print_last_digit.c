#include "main.h"
/**
 * print_last_digit - prints last digit of number
 *
 * @y: input number as an int
 *
 * Return: value of last digit
 */
int print_last_digit(int y)
{
	int a;

	a = y % 10;
	if (y < 0)
	{
		y = y * -1;
		a = y % 10
		_putchar(a + '0');
		return (a);
	}
	else
	{
		_putchar(a + '0');
		return (a);
	}
}
