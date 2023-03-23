#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - A function that searches for an integer.
 * @array: An array to search from.
 * @size: Array size.
 * @cmp: A pointer to a function that compare values.
 * Return: An integer to the indext of the element
 * if found or NULL if integer is not found.
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
