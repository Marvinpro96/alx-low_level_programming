#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	
	/*print lowercase alphabet using putchar*/
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}

	/*print uppercase alphabet using putchar*/
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
