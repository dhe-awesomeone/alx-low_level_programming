#include "main.h"
/**
 * print_last_digit - code to print lsat digit
 *
 * @n: variable
 *
 * Return: last didgit
 */
int print_last_digit(int n)
{
	last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit);
	return (last_digit);
}
