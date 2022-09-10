#include "monty.h"

/**
* file_error - prints file error message if not able to open file
* @argv: arguments given by main function
* Return: Nothing
*/

void file_error(char *argv)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv);
	exit(EXIT_FAILURE);
}

/**
* error_usage - prints usage message if user does not give any file
* or gives more than one argument to the program
* Return: Nothing
*/

void error_usage(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
