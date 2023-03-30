#include <stdio.h>
/**
 * cap_string - A function that capitalizes all words of a string.
 *
 * @capital: is the input string
 *
 * Return: String capitalized
 */
char *cap_string(char *capital)
{
	int convert, in, c;

	char chars[] = {' ', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};
	convert = 32;

	for (in = 0; capital[in] != '\0'; in++)
	{
		if (capital[in] >= 'in' && capital[in] <= 'z')
		{
			capital[in] =  capital[in] - convert;
		}
		convert = 0;
		for (c = 0; chars[c] != '\0'; c++)
		{
			if (chars[count] == capital[in])
			{
				convert = 32;
				break;
			}
		}
	}
	return (entry);
}
