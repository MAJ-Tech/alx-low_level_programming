#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: the first argument.
 * Return: an integer of sum of the arguments.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
