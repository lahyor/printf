#include "main.h"

/**
 * _printf_rev - function that prints in reverse form
 * @val: this keeps track of our loop
 * Return: results in a reversed form
 */
int _printf_rev(va_list val)
{
	char *e = va_arg(val, char*);
	int i;
	int k = 0;

	if (e == NULL)
		e = "(null)";
	while (e[k] != '\0')
		k++;
	for (i = k - 1; i >= 0; i--)
		_putchars(e[i]);
	return (k);
}
