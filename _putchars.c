#include "main.h"
#include <unistd.h>
#define BUFFER_SIZE 1024

/**
 * _putchars - writes the character to standard output
 * @sp: character to be printed
 * Return: on success 1, on error -1.
 */

int _putchars(char sp)
{
	static char buffer[BUFFER_SIZE];
	static int buffer_code;

	if (sp == -1 || buffer_code >= BUFFER_SIZE)
	{
		write(1, &buffer, buffer_code);
		buffer_code = 0;
	}
	if (sp != -1)
	{
		buffer[buffer_code] = sp;
		buffer_code++;
	}
	return (1);
}

/**
 * _printf_buffer - writes remaining characters in the buffer
 * @str: pointer to the string to print
 * Return: Nothing.
 */

int _printf_buffer(char *str)
{
	register int buffer_code;

	for (buffer_code = 0; str[buffer_code] != '\0'; buffer_code++)
		_putchars(str[buffer_code]);
	return (buffer_code);
}
