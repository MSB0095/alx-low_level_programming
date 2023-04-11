#include "main.h"

/**
 * main - multiplies the two parameters
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a, b, c;

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = a * b;
		printf("%d\n", c);
		return (0);

	}
}