#include "main.h"
/**
 * jack_bauer - prints every minute of the day, from 00:00 to 23:59.
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 48; a < 51; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c < 54; c++)
			{
				for (d = 48; d < 58; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
					if ((a == 50) && (b == 51) && (c == 53) && (d == 57))
					{
						b = b + 10;
					}
				}
			}
		}
	}
}
