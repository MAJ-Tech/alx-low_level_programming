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
	for (f = '0'; f < '9'; f++)
	{
		for (s = f + 1; s <= '9'; s++)
		{
			if (f != s)
			{
				putchar(f);
				putchar(s);
				if (f == '8' && s == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
