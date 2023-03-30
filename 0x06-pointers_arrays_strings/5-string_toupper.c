#include <stdio.h>
/**
 * string_toupper - Write a function that changes all lowercase letters of a
 * string to uppercase.
 *
 * @hi: This is the input string
 *
 * Return: Lowercase changed to uppercase of the string
 */
char *string_toupper(char *)
{
	int index = 0;
	int desp = 'a' - 'A';

	for (index = 0; index != '\0'; ++index)
	{
		if (index >= 'a' && index <= 'z')
		{
			index = index - desp;
		}
	}
	return (0);
}
