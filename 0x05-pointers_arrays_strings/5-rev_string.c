#include "main.h"
/**
 * rev_string - Pints a string in revrse to the stdout
 *
 * @s: The string to be printed
 *
 * Return: Has no eturn value (void)
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char c;
 	/** Find the len of the array 's'*/
	while (s[i] != '\0')
	{
		i++;
	}
	/** Second loop to reverse string*/
	while (j < i--)
	{
		c = s[j];
		s[j++] = s[i];
		s[i] = c;

	}
}
