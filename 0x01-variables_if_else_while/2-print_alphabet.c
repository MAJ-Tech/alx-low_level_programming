#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/** main - Entery point*/
int main(void)
{
	char c = 'a';
	/** Beginning of the while loop*/
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
