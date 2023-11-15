#include "main.h"

/**
 * _putchar - prints a character to the standard output
 * @c: The character to print
 * Return: 1 on success, -1 on error with the appropriate errno set.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
 * _puts - prints the string
 * @s: the given string
 * Return: the number of characters
 */
int _puts(char *s)
{
int i = 0, chars = 0;

while (s[i])
{
chars += _putchar(s[i]);
i++;
}
return (chars);
}
