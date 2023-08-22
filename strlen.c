#include "main.h"

/**
 * _strlen - This check for the length of the given string
 * @s: This collects a string pointer
 * Return: a value.
 */
int _strlen(char *s)
{
	int i, length = 0;

	i = 0;
	while (s[i] != '\0')
	{
	length++;
	i++;
	}
	return (length);
}
