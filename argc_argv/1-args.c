#include "main.h"
#include <stdio.h>

/**
 * main - Imprime un numero seguido de una linea
 * @argc: Numero de argumentos
 * @argv: Vectores de argumentos
 * Return: Always 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	(void)argc;
	printf("%d\n", argc - 1);
	return (0);
}
