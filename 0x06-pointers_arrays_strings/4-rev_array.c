#include "main.h"
/**
 * reverse_array - Reverse the content of an integer array @a, of len @n.
 * @a: an array.
 * @n: len of @a.
 * Return: Void (Nothing)
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;
	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
