#include "main.h"
/**
 * factorial - to check whether n < 0 returning -1 to indicate an error
 * @n: n number of times
 * Return: always return SUCCESS
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
