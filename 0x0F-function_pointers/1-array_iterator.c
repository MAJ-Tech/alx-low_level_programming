#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - A function that execute a function passed as an argument.
 * @array: An rray to iterate over.
 * @size: size of the array.
 * @action: A pointer a function to be used.
 * Return: void (has no return value).
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (array == NULL || action == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
