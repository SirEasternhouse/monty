#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "monty.h"
#include <string.h>
/**
 *push_elem - push and element on the stack
 *@stack: the stack
 *@line_number: line number
 *
 *Return: none
 */
void push_elem(stack_t **stack, unsigned int line_number)
{
	char *token = strtok(NULL, " \t\n");/* Get the first argument (integer)*/
	int num = atoi(token);/* Convert to integer*/
	stack_t *new_node = malloc(sizeof(stack_t));

	if (token == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	/* Allocate memory for the new node*/
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = num;
	new_node->next = *stack;
	new_node->prev = NULL;

	if (*stack != NULL)
	{
		(*stack)->prev = new_node;
	}
	*stack = new_node;/* Update the top of the stack*/
}
