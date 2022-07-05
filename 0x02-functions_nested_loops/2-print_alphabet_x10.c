#include "main.h"
/**
 * main- printing the alphabet in lowercase 10 times
 * Return: always return 0 (success)
 * print_alphabet_x10 - printing the alphabet in lowercase 10 times
 * description: printing the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
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
