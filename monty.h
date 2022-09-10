#ifndef MONTY_H
#define MONTY_H

/* Standard Libraries */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

#define INSTRUCTIONS              \
	{                          \
		{"push", push},     \
		    {"pall", pall}, \
		{                   \
			NULL, NULL   \
		}                    \
	}


/* Data structures */

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
* struct help - argument for the current opcode
* @data_struct: stack mode, stack (default) and queue
* @argument: the arguments of the string
*
* Description: global structure used to pass data around the functions easily
*/
typedef struct help
{
	int data_struct;
	char *argument;
} help;
help global;

/* Function prototypes */
stack_t *add_quenode(stack_t **stack, const int n);
stack_t *add_dnode(stack_t **stack, const int n);
size_t print_stack(const stack_t *stack);
void free_stack(stack_t *stack);

void file_error(char *argv);
void error_usage(void);



#endif /* MONTY_H */

