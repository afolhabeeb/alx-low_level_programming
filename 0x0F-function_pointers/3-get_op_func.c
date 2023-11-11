#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - select the correct function to perform
 * operation asked by the user
 *
 * @s: variable pointer to function
 * Return: return pointer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	/* initialize i */
	i = 0;

	/* s does not match any of the operands */
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f); /* return operation */

}
