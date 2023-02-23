#include "main"
#include <unistd h>
/**
 * _putchar - writes the charcter c to stdout
 * @c: The character to print
 *
 * On error, -1 is returned, abd errno is set appropiately
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}
