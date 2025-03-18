#include "3-calc.h"

/**
 * get_op_func - Selecciona la funcion correcta
 * @s: Operador pasado como argumento
 * Return: Puntero a la funcion correspondiente
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

	if (ops[0].op == NULL)
		return NULL;

	if (*s == *(ops[0].op))
		return ops[0].f;

	return get_op_func(s + 1);
}
