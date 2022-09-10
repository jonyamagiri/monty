#include "monty.h"

/**
* is_digit - checks if a string is a digit
* @string: string to be evaluated
* Return: 1 (Success), 0 (otherwise)
*/

int is_digit(char *string)
{
	if (!string || *string == '\0')
		return (0);
	if (*string == '-')
		string++;
	while (*string)
	{
		if (isdigit(*string) == 0)
			return (0);
		string++;
	}
	return (1);
}

/**
* isnumber - checks if a string is a number
* @str: string to be evaluated
* Return: 1 (Success), 0 (otherwise)
*/

int isnumber(char *str)
{
	int i;

	if (!str)
		return (0);

	for (i = 0; str[i]; i++)
	{
		if (i < '0' || i > '9')
			return (0);
	}
	return (1);
}
