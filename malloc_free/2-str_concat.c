#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to newly allocated space with concatenated strings,
 *         or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat, *ptr;
	unsigned int len1 = 0, len2 = 0, total_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	total_len = len1 + len2;

	concat = malloc(sizeof(char) * (total_len + 1));
	if (concat == NULL)
		return (NULL);

	ptr = concat;

	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;

	*ptr = '\0';

	return (concat);
}

