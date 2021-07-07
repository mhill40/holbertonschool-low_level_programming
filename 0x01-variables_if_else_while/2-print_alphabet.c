#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * program that prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
    char x;

    for (x = 'a'; x <= 'z'; x++)
        putchar(x);
        printf("\n");

    return (0);
}
