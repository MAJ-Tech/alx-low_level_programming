#include <stdio.h>
#include "main.h"
/**
 * _islower - Prints alphabets followed by newline
 *@c: Character to be check
 *
 * Return: void (Has no return value)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
