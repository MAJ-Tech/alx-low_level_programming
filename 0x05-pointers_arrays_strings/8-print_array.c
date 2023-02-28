#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints @n elements of an array @a of intigers.
 *
 * @a: array to be printed
 * @n: number of elements of @a to be printed.
 *
 * Return: Nothing (void)
 */
void print_array(int *a, int n)
{
	int i = 0;
	/** Beginnig of the for loop*/
	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
