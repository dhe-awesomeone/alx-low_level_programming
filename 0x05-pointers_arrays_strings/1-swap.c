#include "main.h"
/**
 * swap_int - function to swap value of variables
 *
 * @a: pinter variable
 * @b: pionter variable
 */
void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
