#include "main.h"
/**
 * _isalpha - Check if a character is a  latter
 *
 *@c: character to be checked
 *
 * Return: 1 (isalpha) 0 (ifnot a alpha)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
