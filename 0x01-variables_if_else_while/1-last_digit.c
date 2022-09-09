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

	I = n % 10;

	if (I > 5)
	{
		printf("Last digit of %d is %d and is greater than than 5\n", I, n);
	}
	else if (I == 0)
	{
		printf("Last digit of %d is %d and is zero\n", I, n);
	}
	else 
	{
		printf("Last digit of %d is %d and is less than 6 and is 0\n", I, n);
	}
	return (0);

}
