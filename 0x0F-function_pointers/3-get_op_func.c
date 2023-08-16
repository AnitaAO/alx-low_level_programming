#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects operation asked by user
 * @s: operator passed as arguemnent
 * Return: pointer func corresponding to the given as parameter
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
}
int j = o

while (ops[j].op != NULL && *(ops[j] != *s)
j++;
return (ops[j].f);
}
