#include "main.h"
/**
 * factorial - function to print factorial of a given number
 * @n: variable used
 * Return: -1 errror 1 (if n==0) and the factorial value if all conditions are true
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

