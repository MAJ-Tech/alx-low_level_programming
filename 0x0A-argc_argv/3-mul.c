#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point to the program.
 * @argv: arguments count.
 * @argc: an array of the commamd line arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc >= 3)
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
}
