#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	if ((c >= 'A') && (c <= 'Z'))
	{
		printf("%c: %d\n", c, _isupper(c));
	}
	else
	{
		printf("%c: %d\n", c, _isupper(c));	
	}
	return (0);
}
