#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check for digits from 0 to 9
 *@c: number to be check
 *Return: 1 (true) 0 (false)
 */
int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;
	/** */
	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
