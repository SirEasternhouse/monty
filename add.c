#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
/**
 *add_elem - add elements in a stack
 *@stack: the stack
 *@line_number: line number
 *
 *Return: none
 */
void add_elem(stack_t **stack, unsigned int line_number)
{
	int top = (*stack)->n;
	int second_top = (*stack)->next->n;
	int sum = top + second_top;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	pop_ele(stack, line_number);/* Remove the top element*/
	(*stack)->n = sum; /* Update the second top element with the sum*/
}
