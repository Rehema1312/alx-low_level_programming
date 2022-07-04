#include<stdio.h>
/**
 * main-numbersto base sixteen
 * Return: always return 0 (success)
 */
int main(void)
{
	int v;
	char w;

	for (v = 0; v < 10; v++)
		putchar(v % 10 + '0');
	for (w = 'a' ; w < 'g' ; w++)
		putchar(w);
	return (0);
}
