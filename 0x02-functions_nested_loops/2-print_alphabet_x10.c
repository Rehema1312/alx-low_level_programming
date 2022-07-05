#include "main.h"
/**
 * print_alphabet_x10 -printing the alphabet in lowercase ten times
 * Return: always return 0 (successs)
 */
int print_alphabet_x10(void)
{
	int x;
	char y;

	for (x = 0 ; x < 10; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
			_putchar(y);
		_putchar('\n');
	}
}
