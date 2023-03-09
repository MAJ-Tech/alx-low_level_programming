#include "main.h"

int get_len(char *s);
int plaindrom_checker(char *s, int len);

/**
 * is_plaindrom - check if a string is a plaindrom.
 * @n: integer
 * Return: 1 (for true) and 0 (for false).
 */
int is_palindrome(char *n)
{
	int len;

	len = get_len(n);

	if (len <= 1)
		return (1);

	return (plaindrom_checker(n, len));
}
/**
 * get_len - get the len of a string @s.
 * @s: string.
 * Return: length of @s.
 */
int get_len(char *s)
{
	if (!*s)
		return (0);
	return (get_len(s + 1) + 1);
}

/**
 * plaindrom_checker - assist in plaindrom.
 * @s: string.
 * @len: length of @s.
 * Return: 1 or 0.
 */
int plaindrom_checker(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
	{
		return (plaindrom_checker(s + 1, len - 2));
	}
	else
		return (0);
}
