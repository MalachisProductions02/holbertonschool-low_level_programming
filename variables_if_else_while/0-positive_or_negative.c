#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Funcion random positive-negative
 *
 * Return: 0, com siempre bro
 *
 */
int main(void)
{
	int n;

	srand(time(0)); //Comando para randomizar valores
	n = rand() - RAND_MAX / 2; //Prender el randomizador

	if (n > 0)
	{
		printf("%d is positive\n", n); //Detecta si el valor es positivo y lo imprime
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n); //Detecta si el valor es cero y lo imprime
	}
	else
	{
		printf("%d is negative\n", n); //Detecta si el valor es negativo y lo imprime
	}

	return (0);
}
