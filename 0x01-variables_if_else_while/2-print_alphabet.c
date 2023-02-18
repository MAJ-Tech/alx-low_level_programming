#include <stdio.h>
/**
 *prints alphabets from a to z
 @putchr for out put
 * main - Entery point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
