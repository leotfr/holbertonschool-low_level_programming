#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *ptr; /* Pointer to hold the duplicated string */
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	ptr = malloc(sizeof(char) * (length + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		ptr[i] = str[i];

	return (ptr);
}

