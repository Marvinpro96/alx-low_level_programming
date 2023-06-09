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
	/*for loop to get the length*/
	for (; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}
