#include"main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
	}
	_putchar('\n');
}
