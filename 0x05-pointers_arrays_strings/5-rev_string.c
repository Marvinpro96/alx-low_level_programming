#include <stdio.h>
/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	if (s == NULL)
	{
		return;
	}
	int i, r = 0, k;
	char *a, mav;
	
	a = s;
	while (s[r] != '\0')
	{
		r++;
	}
	for (k = 1; k < r; k++)
	{
		a++;
	}
	for (i = 0; i < (r / 2); i++)
	{
		if (&s[i] != &s[r - 1 - i])
		{
			mav = s[i];
			s[i] = s[r - 1 - i];
			s[r - 1 - i] = mav;
		}
	}
}
