#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{
			int n, f, l;

			n = i * j;
			f = n / 10;
			l = n % 10;
			if (f == 0)
			{
				_putchar(' ');
				_putchar(l + 48);
				if (j == 9)
				{
					break;
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(f + 48);
				_putchar(l + 48);
				if (j == 9)
				{
					break;
				}
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
