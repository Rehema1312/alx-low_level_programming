#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates array of chars intializes with a specific char
 * @c: character to intialize
 * @size:length of the array
 * Return: NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int y;

	x = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	if (x == 0)
	{
		return (0);
	}
	for (y = 0; y < size; y++)
		x[y] = c;
	return (x);
}
