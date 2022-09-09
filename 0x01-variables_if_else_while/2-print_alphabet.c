#include <stdio.h>
/**
 * main - program to print alphabets in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	return 0;
}
