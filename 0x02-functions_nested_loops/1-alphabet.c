#include"main.h"
/**
 * print_alphabet - print alphabet in lower case
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
		ch++;
	}
	_putchar('\n');
}
