#include "main.h"
/**
 * factorial - Returns the factorial of a given integer.
 * @n: An interger.
 *
 * Return: an int factorial of @n.
 */
int factorial(int n)
{

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
