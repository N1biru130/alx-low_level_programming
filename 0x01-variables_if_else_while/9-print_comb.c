#include <stdio.h>

/* 
 *
 * Main -Entry point
 *
 * Return - Always (0) success 
 */

int main(void) 
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
