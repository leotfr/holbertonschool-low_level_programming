#include "main.h"

/**
 * _isdigit - checking digits characters
 * Description: Write a function that checks for a digit (0 through 9).
 * @c: The character to check
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
