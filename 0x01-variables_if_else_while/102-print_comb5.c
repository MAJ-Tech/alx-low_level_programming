#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/**main -Entry point*/
int main(void)
{
	/** @f the fist digit, @s the second digit*/
	int f, s;
	/**for loop in a  foor loop*/
	for (f = 0; f <= 98; f++)
	{
		for (s = f + 1; s <= 99; s++)
		{
			putchar((f / 10) + '0');
			putchar((f % 10) + '0');
			putchar(' ');
			putchar((s / 10) + '0');
			putchar((s % 10) + '0');

			if (f == 98 && s == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
