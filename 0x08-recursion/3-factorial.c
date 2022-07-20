#include "main.h"
/**
 * main - a function that returns the factorial of a given number
 * Return: -1 an error
 * factorial: to checj whether n < 0 returning -1 to indicate an error
 * @n: n number of times
 */
int factorial(int n)
{
	int n;


	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
