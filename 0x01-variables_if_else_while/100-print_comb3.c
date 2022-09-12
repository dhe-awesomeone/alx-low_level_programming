#include <stdio.h>
/**
 * main - code to find all possible combo of two numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int m, n;

	for (m = 8; m <= 56; m++)
	{
		for (n = 9; n <= 57; n++)
		{
			if (m > n)
			{
				putchar(m);
				putchar(n);
				if (m != 56 || n != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
