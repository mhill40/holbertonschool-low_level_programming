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
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
