#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string followed by a new line
 * @str: pointer to string location
 * Return: void
 */
void _puts(char *str)
{
		while (*str)
				{
							putchar (*str);
									str++;
										}
			putchar('\n');
}
