#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/** main - Entery point*/
int main(void)
{
	int d;
	char low;
	/**Beginnong of the loop*/
	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
