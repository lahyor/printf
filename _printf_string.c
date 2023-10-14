#include "main.h"


/**
 * _printf_string - prints a character of string type
 * @args: argument
 * Return: 0
 */

int _printf_string(va_list args)
{
	char *my_name_string;
	int c = 0;

	my_name_string = va_arg(args, char *);
	if (my_name_string == NULL)
		my_name_string = "(nill)";
	while (my_name_string[c])
	{
		_putchars(my_name_string[c]);
		c++;
	}
	return (c);
}
