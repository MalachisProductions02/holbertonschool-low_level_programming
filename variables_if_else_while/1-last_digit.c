#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Funcion otorga ultimo digito, lessss goooooooo
 *
 * Return: I always come back >:) 0
 *
 */
int main(void)
{
	int n, lastd;

	srand(time(0)); //Función para randomizar valores
	n = rand() - RAND_MAX / 2; //Activa el randomizador
	lastd = n % 10;

	if (lastd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd); //Detecta si lastd es mayor que 5 y lo imprime
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastd); //Detecta si lastd es igual a cero y lo imprime
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd); //Detecta si lastd es menor que 6 pero no es cero y lo imprime
	}

	return (0);
}
