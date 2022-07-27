#include <stdio.h>
#include "main.h"
/**
 * _isupper -function that check for uppercase char.
 *  @c: character to be checked
 *  Return: 1 if c uppercase, 0 if c is otherwise
 */
int _isupper(int c)
{
	int res;

	if (c >= 'A' && c <= 'Z')
	{
		res = 1;
	}
	else
	{
		res = 0;
	}
	return (res);
}
