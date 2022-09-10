#include <stdio.h>
/**
 * main - prin numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	x = 0;
	while (x <= 9)
	{
		printf("%d", x);
		++x;
	}
	putchar('\n');
	return (0);
}
