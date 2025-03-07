#include "main.h"
#include <stdio.h>

/**
 * main - Multiplica dos numeros
 * @argc: Numero de argumentos
 * @argv: Vectores de argumentos
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
