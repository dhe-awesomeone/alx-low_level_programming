#include "main.h"
/**
 * _puts_recursion - function to print string with recursion
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}

void main(char c)
{
	_puts_recursion(a);
	_putchar('\n');
}
