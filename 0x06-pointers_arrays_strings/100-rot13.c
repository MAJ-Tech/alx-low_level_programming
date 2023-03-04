#include "main.h"
/**
 * root13 - encrypth a message using .
 * @s: a string
 *
 *Return: a cipher string.
 */
char *rot13(char *s)
{
	char *str = s;
	/** loop*/
	while (*s)
	{
		while ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
		{
			if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M'))
				*s += 13;
			else
				*s -= 13;
			s++;
		}
		s++;
	}
	return (str);
}
