#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format:const character string
 * Return: integer Always
 */
int _printf(const char *format, ...);
int _printf(const char *format, ...)
{
	va_list jul;
	int i, length, count;
	char myChar, *myString;

	if (format == NULL)
		return (-1);

	va_start(jul, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
			{
				return (-1);
			}
			if (format[i] == 'c')
			{
				myChar = va_arg(jul, int);
				write(1, &myChar, 1);
				count++;
			}
			else if (format[i] == 's')
			{
				myString = va_arg(jul, char *);
				if (myString == NULL)
				{
					myString = "(null)";
				}
				length = _strlen(myString);
				write(1, myString, length);
				count += length;
			}
			else if (format[i] == '%')
			{
				write(1, &format[i], 1);
				count++;
			}
		}
	}
	va_end(jul);
	return (count);
}
