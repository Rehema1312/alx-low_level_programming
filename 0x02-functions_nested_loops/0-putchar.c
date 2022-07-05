#include<string.h>
#include "main.h"
#include <stdio.h>
/**
 * main- prints putchar and newline
 * Return: Always return 0 (success)
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		putchar(*sh);
		sh++;
	}
	putchar('\n');
	return (0);
}
