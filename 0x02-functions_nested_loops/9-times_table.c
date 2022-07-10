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
		for (j = 0; j <= 9; j++)
		{
			int n;
			int f;
			int l;

			n = i * j;
			f = n / 10;
			l = n % 10;
			if (n >= 10)
			{
				_putchar(f + 48);
			}
			_putchar(l + 48);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
