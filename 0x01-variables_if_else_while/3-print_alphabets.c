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
		putchar(later);
	for (later = 'A'; later <= 'Z'; later++)
		putchar(later);
	putchar('\n');
	return (0);
}
