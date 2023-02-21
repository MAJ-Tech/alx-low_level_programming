#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int i;
	/** Beginning of the for loop*/
	for (i = 0; i < (int)strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
