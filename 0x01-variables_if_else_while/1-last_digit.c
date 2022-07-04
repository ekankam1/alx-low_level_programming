#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Examining the last digit of a random number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;
		if (last_digit > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
		}
		else
		{
			if (last_digit == 0)
			{
				printf("Last digit of %d is %d and is 0\n", n, last_digit);
			}
			else
			{
				printf("Last digit of %d is %d and", n, last_digit);
				printf("is less than 6 and not 0\n");
			}
		}
	return (0);
}
