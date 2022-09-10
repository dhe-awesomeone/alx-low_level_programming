#include <stdio.h>
/**
 * main - print letters
 *
 * Description: print letters ommiting q and e
 *
 * Returns: Always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x = 'e' || x = 'q')
		{
			continue;
		}
		putchar(x);
	}
	putchar('\n');
	return (0);
}
