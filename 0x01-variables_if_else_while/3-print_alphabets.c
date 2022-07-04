#include <stdio.h>
/**
 * main- priting alphabet both in uppercase and lowercase
 * Return: always return 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ++ch)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

