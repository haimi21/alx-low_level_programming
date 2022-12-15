#include "main.h"

/**
 * _isupper - checks if parameter is a uppercase character.
 * @c: An input character
 * Return: 1 if is an uppercase character, 0 otherwise
 */

int _isupper(int c)
{
char uppercase = 'A';
int  isupper = 0;
for (; uppercase <= 'z'; uppercase++)
{
if (c == uppercase)
{
isupper = 1;
break;
}
}
return (isupper);
}
