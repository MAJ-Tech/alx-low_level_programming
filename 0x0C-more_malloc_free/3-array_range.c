#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates and array of integers.
 * @min: minimum element in an array.
 * @max: maximum element in an array.
 * Return: a pointer to the new array.
 */
int *array_range(int min, int max)
{
	int *new_array, len, i;

	if (min > max)
		return (NULL);

	len = max - min;

	new_array = malloc(sizeof(int) * (len + 1));

	if (new_array == NULL)
		return (NULL);

	for (i = 0; i <= len;  i++)
		new_array[i] = min++;

	return (new_array);
}
