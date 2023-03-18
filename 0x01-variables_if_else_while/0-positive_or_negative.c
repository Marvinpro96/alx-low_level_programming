#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
	/*Main function*/
{
	int n;
/* Seed the random number generator with the current time*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Check if the number is positive */
	if (n > 0)
	{
		/*Print the number and a message indicating that it is positive*/
		printf("%d is positive\n", n);
		/*Check if the number is zero*/
	}
	else if (n == 0)
	{
	/*Print the number and a message indicating that it is zero*/
		printf("%d is zero \n", n);
		/*Otherwise, the number is negative*/
	}
	else
	{
	/*Print the number and a message indicating that it is negative*/
		printf("%d is negative\n", n);
	}

	return (0);
}
