#include "main.h"
/**
 * string_toupper - Reverse the content of an integer array @a, of len @n.
 * @c: string.
 *
 * Return: Void (Nothing)
 */
char *string_toupper(char *c)
{
	char *s = c;
	/** loop*/
	while (*c)
	{
		if (*c >= 'a' && *c <= 'z')
			*c -= 32;
		c++;
	}
	return (s);
}
