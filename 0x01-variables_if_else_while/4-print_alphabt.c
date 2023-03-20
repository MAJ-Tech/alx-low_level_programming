#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char later;

	for (later = 'a'; later <= 'z'; later++)
	{
		if (later == 'e' || later == 'q')
		{
			continue;
		}
		putchar(later);
	}
	putchar('\n');
	return (0);
}
