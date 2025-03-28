#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_strings - Prints strings, followed by a new line.
* @n: Number of strings passed to the function
* @separator: String to be printed between numbers
* Return: Void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);

		if (str == NULL)
			printf("(nil)");
		else
		printf("%s", str);

		if (i < n - 1 && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
