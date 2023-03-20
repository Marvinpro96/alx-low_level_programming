#include <stdio.h>
/**
 * main - Entry point
 * Author: Marvin
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	/*print lowecase alphabets*/
	for (ch = 'a'; ch <= "z"; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
