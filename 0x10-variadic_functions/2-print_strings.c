#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Prints strings.
 *
 * @separator: The string to be printed between strings.
 *
 * @n: Number of strings passed to the function.
 *
 * @...: The rest of the arguments.
 *
 * Return: Void (Nothing).
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *_string;

	va_start(args, n);

	for (; i < n; i++)
	{
		_string = va_arg(args, char*);

		if (_string == NULL)
			printf("(nill)");
		else
			printf("%s", _string);

		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);

	}
	printf("\n");
	va_end(args);
}
