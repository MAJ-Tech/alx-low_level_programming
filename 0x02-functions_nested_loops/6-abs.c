#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 *
 *@n: character to be checked
 *
 * Return: Always a (+) 0 (0) or a * -1 (-)
 */
int _abs(int n)
{
	int a = n;
	/** Beginning of if else statement*/
	if (a >= 1)
	{
		return (a);
	}
	else if (a == 0)
	{
		return (0);
	}
	else
	{
		return (a * -1);
	}
}
