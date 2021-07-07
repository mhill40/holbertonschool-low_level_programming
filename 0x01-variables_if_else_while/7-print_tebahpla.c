#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main is the Entry point
 * program that prints the lowercase alphabet in reverse, followed by a new line.
 * Return is Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (x != '9')
		{
			putchar(',');
//			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
