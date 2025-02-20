#include <stdio.h>

/**
 * main - Uso de putchar: printf para caracteres
 *
 * Return: Que aburrido, siempre es 0 y ¿si le pongo valor como 1?
 *
 */
int main(void)
{
	char c; //Se usa para declarar caracteres

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c); //Esto es para que imprima el abecedario, imprime primero 'a' para que después de eso, se suma uno a c e imprime la siguiente letra
	}

	putchar('\n'); //Impresión de una sola línea, usualmente usado para saltar renglones
	return (0);
}
