#include "main.h"
#include <stdio.h>

/**
 * main - Imprime un numero seguido de una linea
 * @argc: Numero de argumentos
 * @argv: Vectores de argumentos
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv - 1);
        return (0);
}	
