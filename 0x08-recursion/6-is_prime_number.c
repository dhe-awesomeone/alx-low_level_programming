#include "main.h"
/**
 * is_prime_number - function
 * @n: variale
 * @p: variable
 * Return: (1) 
 */
int is_prime_number(int n, int p)
{
	int p;
	
	if ((n / p) == 1)
	{
		return (1);
	}
	if (n == 1)
	{
		return (1);
	}
	else 
		return (0);

	return (is_prime_number(n, p + 1));
}


