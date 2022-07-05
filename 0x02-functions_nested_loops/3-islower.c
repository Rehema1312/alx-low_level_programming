#include "main.h"
/**
 * _islower -returns 1 of lowercase alphabet and 0 for uppercase
 * @c: takes in a character
 * Returns: 1 for lowercase ,0 for uppercase
 */
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
