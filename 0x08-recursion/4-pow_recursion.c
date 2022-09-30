#include "main.h"
/**
 * int _pow_recursion - function to print power
 * @x: variable
 * @y: variable
 * Return: -1 (error), 1 (y is 0)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else 
		return (x * _pow_recursion(x, y - 1));
}
