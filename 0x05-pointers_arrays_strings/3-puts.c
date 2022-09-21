#include "main.h"
#include <stdio.h>
/**
 * _puts - function to print out a string using pointers
 *
 * Return: always 0
 */
void _puts(char *str)
{
	int a = 0;

	while (*(str + a) != '\0')
	{
		_putchar(*(str + a));
		a++;
	}
	return (0);
}
