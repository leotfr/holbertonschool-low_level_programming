#include "main.h"
/**
 * _strlen - Write a function that returns the length of a string.
 * @s: string
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
	len++;
	s++;
	}
	return (len);
}
