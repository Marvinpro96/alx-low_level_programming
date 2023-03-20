#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int single_num;

	/* Prints all single digit numbers of base 10 starting from 0.*/
	for (single_num = 0; single_num <= 10; single_num++)
	{
		printf("%d", single_num);
	}
	printf("\n");
	return (0);
}
