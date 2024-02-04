#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
/**
 *pint_top - print top element in stack
 *@stack: the stack
 *@line_number: line number
 *
 *Return: none
 */
void pint_top(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);/* Print the top value*/
}
