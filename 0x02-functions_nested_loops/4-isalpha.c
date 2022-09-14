#include "main.h"
/**
 * _isalpha - check if an input is a letter and if it supper case or lower ce
 *
 * @c: the variable used
 *
 * Return: Always 0 (scucess)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
