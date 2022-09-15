#include "main.h"
/**
 * _islower - program to check if input is a lowercase alphabet
 *
 * @c: a variablee used in this program
 *
 * Return 1 if lowercase and 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

