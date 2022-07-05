#include<stdio.h>
/**
 * print_alphabet - printing the alphabet in lowercase
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		putchar(x);
	putchar('\n');
}
