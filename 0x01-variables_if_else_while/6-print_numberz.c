#include <stdio.h>
/**
 * main - print single digit of base 10
 *
 * Description: Use only putchar statement and avoid any char vairable
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	for (x =0; x <= 9; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
