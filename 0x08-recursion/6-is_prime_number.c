#include "main.h"
/**
 * is_prime_number - returns 1 on a prime integer otherwise return 0
 * @n: parameter to be tested
 * Return: always return Success
 */
int is_prime_number(int n)
{
	if (n > 1 && n % 2 && n % 5 && n % 3 && n % 7 && n % 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
