#include "main.h"
/**
 * _sqrt_recursion - function 
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion(n) * (1/2));
}
