#include "main.h"

/**
 * _printf_rot_13 - main function
 * @val: String pointer
 * Return: return *s
 */

int _printf_rot_13(va_list val)
{
	int k, r, love = 0;
	int i = 0;
	char *s;
	char data1[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char datarot[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	s = va_arg(val, char*);
	if (s == NULL)
		s = "(null)";
	for (k = 0; s[k] != '\0'; k++)
	{
		i = 0;
		for (r = 0; data1[r] && !i; r++)
		{
			if (s[k] == data1[r])
			{
				_putchars(datarot[r]);
				love++;
				i = 1;
			}
		}
		if (!i)
		{
			_putchars(s[k]);
			love++;
		}
	}
	return (love);
}
