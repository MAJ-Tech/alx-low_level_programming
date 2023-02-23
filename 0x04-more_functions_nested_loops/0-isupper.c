#include "main.h"
/**
 * _isupper - Check if a character is an uppercase
 *@c: character to be check
 *Return: 1 (upper) 0 (otherwise)
 */
int _isupper(int c)
{
	char capital = 'A';
	int iscapital = 0;
	/** Loop throught the uppercase fromA to Z */
	for (; capital <= 'Z'; capital++)
	{
		if (c == capital)
		{
			iscapital = 1;
			break;
		}
	}
	return (iscapital);
}
