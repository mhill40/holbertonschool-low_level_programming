#include "holberton.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main will check the code for Holberton School students.
 *
 * Return is Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf ("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf ("%c: %d\n", c, _isdigit(c));
    return (0);
}
