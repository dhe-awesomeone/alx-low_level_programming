#include "main.h"
/**
 * _get_sqrt - function to get square root
 * @r: variable for square root
 * @n: variable
 * Return: r
 */
int _get_sqrt(int n, int r)
{
	if ((r * r) == n)
		return (r);
	if (r == n / 2)
		return (-1);
	else
		return (_get_sqrt(n, r + 1));
}

/**
 * _sqrt_recursion - function to print square root of a number
 * @n: variable
 * Return: r
 */
int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 1)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (_get_sqrt(n, r));
}
