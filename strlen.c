#include "main.h"

/**
 * _string - This check for the length of the given string
 * @s: This collects a string pointer
 * Return: a value.
 */
int _string(char *s)
{
	int i, length = 0;

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return(write(1, s, length));
	
	
}
