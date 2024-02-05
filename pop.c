#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
/**
 *pop_ele - pop element from stack
 *@stack: the stack
 *@line_number: line number
 *
 *Return: none
 */
void pop_ele(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;/* Store the top node to deallocate*/

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;/* Update the top pointer*/

	if (*stack != NULL)
	{
		(*stack)->prev = NULL;/* Update the new top's prev pointer*/
	}
	free(temp);/* Deallocate the removed node*/
}
