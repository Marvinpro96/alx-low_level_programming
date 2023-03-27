#include <stdio.h>

/**
  * puts2 - Prints every other character of a string
  * @str: The string to be treated
  *
  * Return: void
  */
void puts2(char *str)
{
	int i;
	int b = 0;

	while (str[b] != '\0')
	{
		b++;
	}

	for (i = 0; i < b; i += 2)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
