#include <stdio.h>
#include "holberton.h"
#include <stdio.h>
#include <math.h>
//#include "main.h"
/**
  * print_remaining_days - takes a date and prints how many days are
  * left in the year, taking leap years into account
  * @month: month in number format
  * @day: day of month
  * @year: year
  * Return: void
  */
int(void) print_remaining_days
//"print_remaining_days" 
(int month, int day, int year)
if (year % 4 == 0) (year % 400 == 0) && (year % 100 == 0);
if (month > 2 && day >= 60)
{
("day++");
}

putchar("Day of the year: %d\n", day);
putchar("Remaining days: %d\n", 366 - day);
}
else
{
if (month == 2 && day >= 60)
{
putchar("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
putchar("Day of the year: %d\n", day);
putchar("Remaining days: %d\n", 365 - day);
return (0);
}