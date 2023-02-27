#include "main.h"
/**
 * swap_int - swap the values of two integers.
 *
 * @a: first interger pointe
 *@b: second integer pointer
 * Return: void (has no return value)
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;

}
