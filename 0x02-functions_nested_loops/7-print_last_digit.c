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
	y = y % 10;
	if (y < 0)
	{
		y = y * -1;
		_putchar(y + '0');
		return (y);
	}
	else
	{
		_putchar(y + '0');
		return (y);
	}
}
