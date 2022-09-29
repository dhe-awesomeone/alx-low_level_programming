#include "main.h"
#include <stdio.h>


void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(strrev(*s));
		_print_rev_recursion(strrev(s + 1));
	}
	else
	{
		_putchar('\n');
	}
}
