#include "main.h"
/**
 * _strlen_recursion - function to print the length of a string
 * @s: variable pointer of character datatype
 * Return: Value  or 0
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		/*_print_rev_recursion(s + 1);*/
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
