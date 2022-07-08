#include "main.h"
/**
 * _isdigit - checks for a digit
 *
 * @c: input is integer
 *
 * Return: 1 if digit is found, 0 otherwise
 */
int _isdigit(int c)
{
	while ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
