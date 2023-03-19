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
	int last_digit = n % 10;
	/*Print the result based on the value of the last digit*/
	printf("Last digit of %d is ", n);
	/* Check if the number is greater than 5*/
        if (last_digit > 5)
        {
                /*Print the number and a message indicating that it is greater than 5*/
                printf("%d is greater than 5\n", last_digit);
                /*Check if the number is zero*/
	}
	else if (last_digit == 0)
	{
        /*Print the number and a message indicating that it is zero*/
		printf("%d is zero\n", last_digit);
	       	/*Otherwise, the number is is less than 6 and not 0*/
	}
	else
	{
	       	/*Print the number and a message indicating that the number is is less than 6 and not 0*/
		printf("%d is less than 6 and not 0\n", last_digit);
	}
       	return (0);
}
