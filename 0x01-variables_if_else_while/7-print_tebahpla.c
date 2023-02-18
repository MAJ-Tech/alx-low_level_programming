#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/** main - Entery point*/
int main(void)
{
	char c = 'z';
	/** Beginning of the while loop*/
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
