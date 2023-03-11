#include <stdio.h>
/**
 * main - Entry point to the program.
 * @argv: arguments count.
 * @argc: an array of the commamd line arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);

	return (0);
}
