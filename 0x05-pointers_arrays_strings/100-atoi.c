#include <stdio.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int r = 0;
	unsigned int vi = 0;
	int m = 1;
	int as = 0;

	while (s[r])
	{
		if (s[r] == 45)
		{
			m *= -1;
		}

		while (s[r] >= 48 && s[r] <= 57)
		{
			as = 1;
			vi = (vi * 10) + (s[r] - '0');
			r++;
		}

		if (as == 1)
		{
			break;
		}

		r++;
	}

	vi *= m;
	return (vi);
}

