#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int single_num;

	for (single_num = 0; single_num < 10; single_num++)
	{
		putchar((single_num % 10) + '0');
	}
	putchar('\n');
	return (0);
}
