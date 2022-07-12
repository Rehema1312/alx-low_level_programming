#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str: pointer to string location
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
