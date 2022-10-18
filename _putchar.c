#include <unistd.h>

/**
 * _putchar - writes a char to stdout
 * @c: the char to print
 * return: on Success, 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
