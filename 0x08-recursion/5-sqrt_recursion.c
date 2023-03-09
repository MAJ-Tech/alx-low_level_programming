#include "main.h"
/**
 * _sqrt_recursion - A function that returns the natural square root of a n.
 * @n: natural Number.
 *
 * Return: Natural square of @n.
 */
int _sqrt(int num, int Bn);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}

/**
 * _sqrt - check for perfect square.
 * @num: squares starting at 1.
 * @Bn: natural number.
 * Return: perfect suare of @Bn.
 */


int _sqrt(int num, int Bn)
{
	if (num > Bn)
		return (-1);
	else if (num * num == Bn)
		return (num);
	else
		return (_sqrt(num + 1, Bn));
}
