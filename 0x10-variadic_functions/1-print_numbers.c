#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - A function that prints numbers, followed by a new line.
 * @separator: A string to be printed between numbers.
 *
 * @n: The number of integers passed to the function.
 *
 * Return: Void (Nothing)/
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int  i = 0;
	int num;

	va_start(args, n);

	for (; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
