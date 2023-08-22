#include "main.h"

/**
 * _string - This check for the length of the given string
 * @s: This collects a string pointer
 * Return: a value.
 */
int _string(char *s)
{
	int i;

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		write(1, s[i], 1);
	}
	return (i);

}
