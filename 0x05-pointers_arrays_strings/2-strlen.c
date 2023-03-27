#include <stdio.h>

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		/*iterate until the end of string character is encountered*/
		len++;/*increment length*/
		*s++;/*move to next character*/
	}
	return (len);
}
