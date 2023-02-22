#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 *
 *@n: number to be evaluated
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int num;
	/** Check for + and - numbers*/
	if (n >= 0)
	{
		num = n % 10;
	}
	else
	{
		num = -1 * (n % 10);
	}
	/**prints and return the last digit*/
	_putchar(num + '0');
	return (num);
}
