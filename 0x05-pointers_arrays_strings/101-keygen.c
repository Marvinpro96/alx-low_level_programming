#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char password[11]; /* allocate space for password (10 characters + null terminator)*/
	srand(time(NULL)); /*seed random number generator with current time*/
	/* generate random characters for password*/

	for (i = 0; i < 10; i++)
	{
		password[i] = rand() % 94 + 33; /* ASCII characters 33-126 are valid password characters*/
	}
	password[10] = '\0'; /* null terminate the password string*/
	printf("%s\n", password); /* print the password to the console*/
	return (0);
}
