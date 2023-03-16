#include <stdio.h>  /* Including standard input/output header file.*/

int main (void)
{       
	int x;  /*Declaring an integer variable x.*/
	long int y;  /*Declaring a long integer variable y.*/
	long long int z;  /* Declaring a long long integer variable z.*/
       	char c;  /* Declaring a character variable c.*/
	float f;  // Declaring a floating-point variable f.
       
	/* Printing the size of a char variable in bytes.*/
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
        /* Printing the size of an int variable in bytes.*/
       	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(x));
        /* Printing the size of a long int variable in bytes.*/
       	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(y));
       	/* Printing the size of a long long int variable in bytes.*/
       	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(z));
        /* Printing the size of a float variable in bytes.*/
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
        return (0);
}       

