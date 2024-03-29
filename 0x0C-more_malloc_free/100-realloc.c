#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: is a pointer to the memory previously allocated with a call to malloc.
 * @old_size: is the size, in bytes, of the allocated space for ptr.
 * @new_size: is the new size, in bytes of the new memory block.
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_location, *new_ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL) /* treat as normal malloc */
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);

		return (NULL);
	}

	new_location = malloc(new_size);
	new_ptr = ptr;

	if (old_size > new_size)
		old_size = new_size;

	for (i = 0; i < old_size; i++)
		new_location[i] = new_ptr[i];

	free(ptr);

	return (new_location);
}
