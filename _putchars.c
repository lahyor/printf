#include "main.h"
#include <unistd.h>

/**
 * _putchars - writes the character c to stdout
 * @sp: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * Description: _putchar uses a local buffer of 1024 to call write
 * as little as possible
 */
int _putchars(char sp)
{
	static char buffer[1024];
	static int i;

	if (sp == -1 || i >= 1024)
	{
		write(1, &buffer, i);
		i = 0;
	}
	if (sp != -1)
	{
		buffer[i] = sp;
		i++;
	}
	return (1);
}

/**
 * _put - prints a string to stdout
 * @str: pointer to the string to print
 * Return: number of chars written
 */
int _put(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchars(str[i]);
	return (i);
}
