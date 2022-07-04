#include<stdio.h>
/**
 * main- digits numbers of base ten
 * Return: always return 0(success)
 */
int main(void)
{
	int w;

	while (w < 10)
	{
		putchar(w % 10 + '0');
		w++;
	}
	putchar('\n');
	return (0);
}
