#include "main.h"
/**
 * print_alphabet_x10 - prints lower case alphabet 10x
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i;
	char ch;

	i = 0;
	while (i <= 9)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		i++;
	}
	_putchar('\n');
}
