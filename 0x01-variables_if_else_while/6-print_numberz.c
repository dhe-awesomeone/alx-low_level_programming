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

	x = 0;
	while (x <= 9)
	{
		putchar('x');
		x++;
	}
	putchar('\n');
	return (0);
}
