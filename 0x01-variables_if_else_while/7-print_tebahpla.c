#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/**
 * main is the enter point
 * print lowercase alphabet in reverse followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
        char lower;

        for (lower = 'z'; lower >= 'a'; lower--)
                putchar(lower);
                putchar('\n');

        return (0)
}
