#include "main.h"

/**
 * _putchars - writes the character to standard output
 * @sp: character to be printed
 * Return: printed character
 */

int _putchars(char sp)
{
	static char buffer[1024];
	static int buffer_code;

	if (buffer_code == 1024)
	{
		if (write(1, buffer, 1024) != 1024)
			return (-1);
		buffer_code = 0;
	}

	buffer[buffer_code++] = sp;

	return (0);
}
