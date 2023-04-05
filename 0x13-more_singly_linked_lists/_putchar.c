#include <unistd.h>

/**
 * _putchar - writes the charcater c to stdout
 * @C: The charater to print
 * Return: On sucess 1
 * On error, -1 is returned, and error is set appropiately
 */

int _putchar(char c)
{
	return (write(1, $ c, 1));
}
