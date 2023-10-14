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
		{ "c", seun_printf_char },
		{ "s", seun_printf_string },
		{ NULL, NULL }
	};
	while (find_t[x].is)
	{
		if (find_t[x].is[0] == (*format))
			return (find_t[x].p);
		x++;
	}
	return (NULL);
}

/**
 * seun_printf - produces output according to format
 * @format: the format
 * Return: output text
 */

int seun_printf(const char *format, ...)
{
	va_list args;
	int (*p)(va_list);
	unsigned int v = 0, front = 0;

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
		if (format[v] == '\0')
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
