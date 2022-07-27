#include "main.h"
/**
 *_isdigit - function that checks for a digit
 *@c: is the character to be checked
 *Return: 1 if c is a digit, 0 if c is otherwise
 */
int _isdigit(int c)
{
	int res;

	if (c >= 48 && c <= 57)
	{
		res = 1;
	}
	else
	{
		res = 0;
	}
	return (res);
}
