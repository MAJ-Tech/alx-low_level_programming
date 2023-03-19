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

	len = max - min;

	if (len <= 0)
		return (NULL);

	new_array = malloc(sizeof(new_array) * (len + 1));

	if (new_array == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		new_array[i] = min;

	return (new_array);
}
