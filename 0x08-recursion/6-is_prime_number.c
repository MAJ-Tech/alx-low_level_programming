#include "main.h"

int check_prime(int div, int num);
/**
 * is_prime_number - check for prime numbers.
 * @n: number to check.
 * Return: 1 (prime) 0 (non prime)
 */
int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);
	return (check_prime(divisor, n));
}
/**
 * check_prime - check for prime.
 * @num: the number pass initial.
 * @div: divisor.
 * Return: 1 (prime) 0 (N0n-prime).
 */
int check_prime(int div, int num)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (check_prime(div + 1, num));
}
