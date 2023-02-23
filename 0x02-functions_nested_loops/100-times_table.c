#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Prints the time table of numbers(9)
 *@n: time table
 * Return: (void) has no return value
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
	}
	else
	{
		int i = 0, j = 0;
		/** */
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int N = i * j;
				/** */
				printf("%d", N);
				if (j == n)
					continue;
				printf(", ");
			}
			printf("\n");
		}
		printf("\n");
	}
}
