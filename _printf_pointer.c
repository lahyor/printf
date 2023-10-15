#include "main.h"

/**
 * _printf_pointer - prints the character p
 * @val: arguments
 * Return: counter
 */

int _printf_pointer(va_list val)
{
	void *t;
	char *s = "(nil)";
	long int f;
	int b, i;

	t = va_arg(val, void*);
	if (t == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchars(s[i]);
		}
		return (i);
	}

	f = (unsigned long int)t;
	_putchars('0');
	_putchars('x');
	b = _printf_hex_aux(f);
	return (b + 2);
}
