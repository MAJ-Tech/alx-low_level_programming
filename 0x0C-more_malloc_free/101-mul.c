#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point to the program.
 * @ac: command line argument count(array.length).
 * @v: command line arguments vector(array).
 * Return: Always 0 (success).
 */

int main(int ac, char **av)
{
	int num1, num2, result;

	if (ac != 3)
	{
		printf("%s\n", "Error");
		exit (98);
	}

	num1 = atoi(av[1]);
	num2 = atoi(av[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
