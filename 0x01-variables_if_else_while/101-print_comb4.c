#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/**main -Entry point*/
int main(void)
{
	/** @f the fist digit, @s the second digit @l the third digit*/
	int f, s, l;
	/**for loop in a  foor loop*/
	for (f = '0'; f < '8'; f++)
	{
		for (s = f + 1; s < '9'; s++)
		{
			for (l = s + 1; l <= '9'; l++)
			{
				if (f != s && s != l)
				{
					putchar(f);
					putchar(s);
					putchar(l);
					if (f == '7' && s == '8' && l == '9')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
