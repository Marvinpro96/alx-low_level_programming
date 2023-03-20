#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *Main function that slects diffent numbers randomly and generate the answer
 */
int main(void)
        /*Main function*/
{
	int n;
	/* Seed the random number generator with the current time*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*Compute the last digit of n*/
	/*Print the result based on the value of the last digit*/
	printf("Last digit of %n is ", n%10);
	/* Check if the number is greater than 5*/
	if (n%10 > 5)
	{
		/*Print the number and a message indicating that it is greater than 5*/
		printf("%d is greater than 5\n", n%10);
		/*Check if the number is zero*/
	}
	else if (n%10 == 0)
	{
		/*Print the number and a message indicating that it is zero*/
		printf("%d is zero\n", n%10);
		/*Otherwise, the number is is less than 6 and not 0*/
	}
	else
	{
		/*Print the number and a message indicating that the number is is less than 6 and not 0*/
		printf("%d is less than 6 and not 0\n", n%n);
	}
	return (0);
}
