#include "main.h"
/**
 * _strlen - function to return lenght of a string
 * @s: Pointer input
 * Return: z
 */
int _strlen(char *s)
{
	int z;

	for (z = 0; s[z] != '\0'; z++)
	{}
	return (z);
}
