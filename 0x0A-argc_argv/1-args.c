#include "main.h"

/**
 * main - prints the number of arguments passed
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: always 0
*/
int main(int argc, char *argv[])
{
	(void)argv;
	int arg;

	arg = argc - 1;
	printf("%d\n", arg);
	return (0);
}
