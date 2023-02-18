#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *
 *Return: Always Success(0)
 */
int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	long unsigned int i;
	/**The beginning of the for loop*/
	for (i = 0; i < sizeof(q); i++)
		putchar(q[i]);
	putchar('\n');
	return (1);
}
