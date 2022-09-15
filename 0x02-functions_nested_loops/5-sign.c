#include "main.h"
/**
 * print_sign - c program to print sign of number 
 *
 * @n: varible usded
 *
 * Return: 1 positive 0 neutral -1 negaive
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return(1);
	}
	else if (n < 0)
	{
		_putchar('0');
		return (0);
	}
	else 
	{
		_putchar('-1');
		return (-1);
	}
}
