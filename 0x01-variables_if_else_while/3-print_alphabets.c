#include <stdio.h>
/**
 * main - printing alphabets
 *
 * Description: program to print alphabets in lower case first then upper case followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
