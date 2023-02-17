#include <stdio.h>
/**
 *main - Entry point
 *prints some strig to the output
 *printf() writes a string to stdout
 *Return: Always 0 (Success)
 */

int main(void)
{
	char mychar;
	int myint;
	long int my_long_int;
	long long int my_long_long_i;
	float myfloat;
	/** commenytt */
	printf("Size of a char: %lu byte(s)\n",
	       (unsigned long)sizeof(mychar));
	printf("Size of an int: %lu byte(s)\n",
	       (unsigned long)sizeof(myint));
	printf("Size of of a long int: %lu byte(s)\n",
	       (unsigned long)sizeof(my_long_int));
	printf("Size of a long long int: %lu byte(s)\n",
	       (unsigned long)sizeof(my_long_long_i));
	printf("Size of a float: %lu byte(s)\n",
	       (unsigned long)sizeof(myfloat));
	return (0);
}
