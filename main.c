#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - main monty program
 *@argc: agruments
 *@argv: values of arguments
 *
 *Return: 0 sucess
 */
int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "r");
	/* Argument validation*/
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	/* File opening*/
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	execute_monty(fp);
	return (0); /* Exit with success */
}
