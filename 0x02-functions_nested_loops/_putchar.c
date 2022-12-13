#include "main.h"
#include <unistd.>

/**
 * _putchar - writes the character c to stdout 
 * @c: the character to print
 *
 * Description: 'print putchar'
 *
 * return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
