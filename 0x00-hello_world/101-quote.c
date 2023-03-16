#include <stdio.h>
/**
 * main - Entry point
 */
int main(void)
{
	const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	const int msg_len = sizeof(msg) - 1; /* exclude null terminator*/
	write(STDERR_FILENO, msg, msg_len);
	return (1);
}
