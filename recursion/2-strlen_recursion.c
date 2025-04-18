#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string recursively.
 * @s: Pointer to the string to be measured.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
