#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
//#include "main.h"
//#include <main.h>

/**
 * main will check the code for Holberton School students.
 *
 * Return is Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
