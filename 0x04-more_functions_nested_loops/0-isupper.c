#include "main.h"
/**
 * _isupper - code for upper case
 *
 * @c: variable
 *
 * Return: 1 upper case 0 lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
