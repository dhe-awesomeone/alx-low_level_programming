#include "main.h"
#include <stdio.h>


void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		char strrev();

		char rev = strrev(*s);
		_putchar(rev);
		_print_rev_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
