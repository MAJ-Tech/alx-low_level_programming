#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - A function prints anyting.
 * @format: A list of type of arguments passed to the function.
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *tmp;
	int i = 0;

	va_start(args, format);

	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char) va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(args, double));
			break;
		case 's':
			tmp = va_arg(args, char*);
			if (tmp != NULL)
			{
				printf("%s", tmp);
				break;
			}
			printf("(nil)");
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		     format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
