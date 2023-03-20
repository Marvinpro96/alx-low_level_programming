#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	/*Prints the lowercase alphabet in reverse.*/
	/*print apherbets in reverse order*/
	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar (ch);
	}
	putchar('\n');
	return (0);
}
