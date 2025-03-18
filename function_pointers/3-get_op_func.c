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
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
