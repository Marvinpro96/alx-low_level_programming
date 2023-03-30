#include <stdio.h>
/**
 * string_toupper - Write a function that changes all lowercase letters of a
 * string to uppercase.
 *
 * @hi: This is the input string
 *
 * Return: Lowercase changed to uppercase of the string
 */
char *string_toupper(char *m)
{
	int index = 0;
	int desp = 'a' - 'A';

	for (index = 0; m[index] != '\0'; ++index)
	{
		if (m[index] >= 'a' && m[index] <= 'z')
		{
			m[index] = m[index] - desp;
		}
	}
	return (0);
}
