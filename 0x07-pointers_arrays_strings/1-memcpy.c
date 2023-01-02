/*
 * File: 1-memcpy.c
 * Auth: sam tech
 */

#include "main.h"

/**
 * _memcpy - Copies @n bytes from the memory area pointed
 * to by @src into that pointed to by @dest.
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The number of bytes to copy from @src.
 *
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
