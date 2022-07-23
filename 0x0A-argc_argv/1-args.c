#include <stdio.h>
/**
 * main - prints number of arguments passed into it
 *
 * @argc: number of commant line arguments
 *
 * @argv: array that contains program command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
