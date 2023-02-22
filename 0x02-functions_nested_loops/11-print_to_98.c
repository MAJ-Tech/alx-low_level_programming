#include <stdio.h>
#include <string.h>
/**
 * print_to_98 - prints to 98 from below or above
 *@n: Beginning number
 *Return: Always 0 (Success)
 */
void  print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
