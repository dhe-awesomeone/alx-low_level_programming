#include "main.h"
/**
 * print_last_digit - code to print lsat digit
 *
 * @n: variable
 *
 * @last_digit: varible
 *
 * Return: last didgit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit);
	return (last_digit);
}
