#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * main - Print the alphabet
 // Return: Always 0 (Success, 1 or 2 means errror)
 */
int main(void)
{
	char a;
    char z;
    char x;

	for (x = 'a'; x <= 'z' ; x++)
		putchar(x);
	putchar('\n');
	return (0);
}