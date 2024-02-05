#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "monty.h"
/**
 *swap_elem - swap elements in a stack
 *@stack: the stack
 *@line_number: line number
 *
 * Return: none
 */
void swap_elem(stack_t **stack, unsigned int line_number)
{
	int temp = (*stack)->n;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	/* Swap the values of the top two nodes*/
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
