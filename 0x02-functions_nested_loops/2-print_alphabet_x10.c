#include "main.h"
/**
 * main - check the code.
 * Return: always 0.
 * print_alphabet_x10; - printing the alphabet in lowercase 10 times
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
