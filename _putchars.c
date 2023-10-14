#include "main.h"

#define BUFFER_SIZE 1024

/**
 * _putchars - writes the character to standard output
 * @sp: character to be printed
 * Return: 1 on success, -1 not successful
 */

int _putchars(char sp)
{
	static char buffer[BUFFER_SIZE];
	static int buffer_code;

	if (buffer_code < BUFFER_SIZE)
	{
		buffer[buffer_code++] = sp;
		return (1);
	}
	else
	{
		if (write(1, buffer, BUFFER_SIZE) == -1)
			return (-1);
		buffer_code = 0;
		buffer[buffer_code++] = sp;
		return (1);
	}
}

/**
 * _printf_buffer - writes remaining characters in the buffer
 * Return: 0 on success, 1 on error
 */

int _printf_buffer(void)
{
	if (buffer_code > 0)
	{
		if (write(1, buffer, buffer_code) == -1)
			return (-1);

		buffer_code = 0;
	}
	return (0);
}
