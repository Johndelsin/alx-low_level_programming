#include "main.h"

/**
 * *_memcpy - the function copies n bytes from memory area
 * @dest: destination memeory area
 * @src: source memeory area
 * @n: bytes from memeory area to copy
 *
 * REturn: memory area replaced
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
