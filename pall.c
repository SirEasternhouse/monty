#include <stdio.h>
#include <stddef.h>
#include "monty.h"
/**
 *print_elem - print value on stack
 *@stack: the stack
 *@line_number: number of the line
 *
 *Return: none
 */
void print_elem(stack_t **stack,
		unsigned int line_number __attribute__((unused)))
{
	stack_t *current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
