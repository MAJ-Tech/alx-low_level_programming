#include "main.h"
/**
 * cap_string - capitalize a string
 * @s: string.
 *
 * Return: capatilized string
 */
int check_seperators(char c);
/** degining of the cap function*/
char *cap_string(char *s)
{
	int i = 0;
	/** Loop*/
	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;
		if (check_seperators(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
		i++;
	}
	return (s);
}
int check_seperators(char c)
{
	int i = 0;
	char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',
                '"', '(', ')', '{', '}' };
	/** new*/
	for (; i < 13; i++)
	{
		if (c == seperators[i])
			return (1);
	}
	return (0);
}
