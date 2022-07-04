#include <stdio.h>
/**
 * main-prints alphabet in reverse lowercase
 * Return: always return 0(success)
 */
int main(void)
{
	char x;

	for (x = 'z' ; x >= 'a' ; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
