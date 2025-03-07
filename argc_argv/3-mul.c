#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplica dos numeros
 * @argc: Numero de argumentos
 * @argv: Vectores de argumentos
 * Retunr: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
