#include <stdio.h>

/**
  * puts_half - Prints half of a string
  * @str: The string to print
  *
  * Return: void
  */
void puts_half(char *str)
{
	int b = 0;
	int k;

	while (str[b] != '\0')
	{
		b++;
	}

	if (b % 2 == 1)
	{
		k = (b - 1) / 2;
		k += 1;
	}
	else
	{
		k = b / 2;
	}

	for (; k < b; k++)
	{
		putchar(str[k]);
	}
	putchar('\n');
}
