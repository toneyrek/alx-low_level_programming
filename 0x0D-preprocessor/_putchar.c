#include <unistd.h>

/**
 *  _putchar - writes the character c to stdout
 *  @c: The character to print
 *
 *  Return: ON success 1.
 *  On error, -1 ia returned, and errno is set apropraitely.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
