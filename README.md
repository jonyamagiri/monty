# Monty Project

> This repository contains the tasks for `Monty` project and a description of what each program or function does:

## Introduction:
[Monty 0.98](http://montyscoconut.github.io/) is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project was to create an interpreter for Monty ByteCodes files.
Files containing Monty byte codes usually have the `.m` extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument.


## Compilation & Output:
The following command was used to compile the code:
`$ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty`


### Tasks

#### Task: 
Implement the `push` and `pall` opcodes.
* The opcode `push` pushes an element to the stack.
* The opcode `pall` prints all the values on the stack, starting from the top of the stack.

#### Task: 
Implement the `pint` opcode.
* The opcode `pint` prints the value at the top of the stack, followed by a new line.

#### Task: 
Implement the `pop` opcode.
* The opcode `pop` removes the top element of the stack.

#### Task: 
Implement the `swap` opcode.
* The opcode `swap` swaps the top two elements of the stack.

#### Task: 
Implement the `add` opcode.
* The opcode `add` adds the top two elements of the stack.

#### Task: 
Implement the `nop` opcode.
* The opcode `nop` doesn’t do anything.


#### Data structures used for this project:

```
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
```
```
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
```

___

#### Files:

* []()

#### Author:

* [Joab O. Nyamagiri](https://github.com/jonyamagiri)


