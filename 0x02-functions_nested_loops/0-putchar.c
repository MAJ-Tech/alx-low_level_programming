#include <stdio.h>
#include <string.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int i;
	/**beginning of the for loop*/
	for (i = 0; i < (int)strlen(str); i++)
		putchar(str[i]);
	/**End of the for loop*/
	putchar('\n');
	/**@return statement*/
	return (0);
}
