#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - program to print last digit of a number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	
	srand(time(0));
	
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than than 5", n);
	}
	return (0);

}
