#include "holberton.h"
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
/**
 * largest_number program returns the largest of 3 numbers
 * a equals first int
 * b equals second int
 * c equals third int
 * Return: largest number
 */
int largest(int a, int b, int c)
{
int largest = ();

if (a >= b && a >= c)
{
largest = a;
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}
