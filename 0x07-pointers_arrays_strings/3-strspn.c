#include "main.h"

/**
 * _strspn - returns the number of bytes in the initial segment of s
 * @s: source string
 * @c: character to find
 *
 * REturn: the string from character found
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0')
}
