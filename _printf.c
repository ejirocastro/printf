#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format:const character string
 * Return: integer
 */

int _printf(const char *format, ...)
{
	va_list jul;
	int i, length = 0;
	char myChar, *myString;

	va_start(jul, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			continue;
		}
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				myChar = va_arg(jul, int);
				write(1, &myChar, 1);
			}
			if (format[i] == 's')
			{
				myString = va_arg(jul, char *);
				length = strlen(myString);
				write(1, myString, length);
			}
			if (format[i] == '%')
			{
				write(1, &format[i], 1);
			}
		}
	}
	va_end(jul);
	return (i);
}
