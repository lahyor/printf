#include "main.h"

/**
 * characters - finds format for _printf
 * @format: format
 * Return: Nothing
 */

int (*characters(const char *format))(va_list)
{
	unsigned int x = 0;
	p_code find_t[] = {
		{ "c", _printf_char },
		{ "s", _printf_string },
		{ "b", _printf_binary },
		{ "p", _printf_pointer },
		{ "i", _printf_int },
		{ "d", _printf_int },
		{ NULL, NULL }
	};
	while (find_t[x].identifier)
	{
		if (find_t[x].identifier[0] == (*format))
			return (find_t[x].p);
		x++;
	}
	return (NULL);
}

/**
 * _printf - produces output according to format
 * @format: the format
 * Return: output text
 */

int _printf(const char *format, ...)
{
	va_list args;
	int (*p)(va_list);
	size_t v = 0, front = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[v])
	{
		while (format[v] != '%' && format[v])
		{
			_putchars(format[v]);
			front++;
			v++;
		}
		if (format[v] == '0')
			return (front);
		p = characters(&format[v + 1]);
		if (p != NULL)
		{
			front += p(args);
			v += 2;
			continue;
		}
		if (!format[v + 1])
			return (-1);
		_putchars(format[v]);
		front++;
		if (format[v + 1] == '%')
			v += 2;
		else
			v++;
	}
	va_end(args);
	return (front);
}
