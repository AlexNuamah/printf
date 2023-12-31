#include "main.h"

/**
 * _isneg - check whether or not a number
 * is negative
 * @number: the given number
 * Return:  1 on success or 0 when positive
 */
int _isneg(int number)
{
if (number < 0)
{
write(1, "-", 1);
return (1);
}
return (0);
}
/**
 * _convertneg - negates any given number
 * @number: the given number
 * Return: the negative number
 */
int _convertneg(int number)
{
return ((number *= -1) - 1);
}

/**
 * _finddigits - counts the number of digits
 * from a given number
 * @number: the given number
 * Return: the number of digits counted
 */
int _finddigits(int number)
{
int digits = 0;

if (number == 0)
return (1);
while (number > 0)
{
number /= 10;
digits++;
}
return (digits);
}
/**
 * itoa - converts an integer to ASCII
 * @number: the given number
 * @isneg: check whether a number is negative
 * Return: the new ASCII
 */
char *itoa(int number, int isneg)
{
char *str = NULL;
int index = 0, digits = 0;

digits = _finddigits(number);
str = malloc(sizeof(char) * digits + 1);
if (!str)
exit(EXIT_FAILURE);
index = digits - 1;
while (index >= 0)
{
if (isneg && index == (digits - 1))
str[index] = ((number % 10) + 48) + 1;
else
str[index] = (number % 10) + 48;
number /= 10;
index--;
}
str[digits] = '\0';
return (str);
}
/**
 * print_number - prints the given number
 * @number: the given number
 * Return: the number of characters given
 */
int print_number(int number)
{
int c = 0;
char *str = NULL;

c = _isneg(number);
if (c)
{
number = _convertneg(number);
}
str = itoa(number, c);
c += _puts(str);
free(str);
return (c);
}
