#include "main.h"
/**
 * int _strlen_recursion - function to print the length of a string 
 * @s: variable pointer of character datatype
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_strlen_recursion(s + 1);
		return (1 + _strlen_recursion(s));
	}
}
