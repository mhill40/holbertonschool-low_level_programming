#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: 0
 */
int main(void)
{
    char c;

    c = 'A';
    _putchar("%c: %d\n", c, _isupper(c));
    c = 'a';
    _putchar("%c: %d\n", c, _isupper(c));
    return (0);
}
