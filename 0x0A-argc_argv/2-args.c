#include <stdio.h>
/**
 * main - Entry point to the program.
 * @argv: arguments count.
 * @argc: an array of the commamd line arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
