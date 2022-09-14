#include "main.h"
/**
 * main - c program to print _putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char s[] = "_putchar";
	
	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
	return (0);
}
