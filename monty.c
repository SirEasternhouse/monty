#define _GNU_SOURCE
#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *execute_monty - execute the monty program
 *@fp: file to open
 *
 *
 *Return: none
 */
void execute_monty(FILE *fp)
{
	char *line = NULL;
	size_t len = 0, read;
	unsigned int line_number = 1;
	stack_t *stack = NULL;
	instruction_t instructions[] = {
		{"push", push_elem},
		{"pall", print_elem},
		{"", NULL} /* Terminate with a null opcode*/
	};

	while ((read = getline(&line, &len, fp)) != (size_t)-1)
	{
		char *opcode = strtok(line, " \t\n");
		instruction_t *instruction = instructions;

		while (instruction->opcode != NULL &&
			strcmp(instruction->opcode, opcode) != 0)
		{
			instruction++;
		}
		if (instruction->opcode == NULL)
		{
			fprintf(stderr, "Invalid instruction: %s\n", opcode);
			continue;
		}
		instruction->f(&stack, line_number);
		line_number++;
	}
	fclose(fp);
	free(line);
}
