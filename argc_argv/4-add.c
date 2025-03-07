#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Agrega numeros positivos
 * @argc: Numero de argumentos
 * @argv: Vectores de argumentos
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j;
	char *arg;

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		for (j = 0; arg[j] != '\0'; j++)
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(arg);
	}
	printf("%d\n", sum);
	return (0);
}
