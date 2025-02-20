#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Imprime números en distintas secuencias hasta 98
 * @n: Valor numérico
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n <= 98)  //Detecta si el valor es menor o igual a 98
	{
		for (; n < 98; n++)  //';' al inicio de un bucle for sirve para indicar un valor vacío
		{
			printf("%d, ", n);  //Si el valor es menor que 98, suma uno a n y lo imprime con una coma y espacio vacío
		}
	}
	else
	{
		for (; n > 98; n--)  // Detecta si el valor es mayor que 98 y le resta uno
		{
			printf("%d, ", n);  //Imprime el valor n con una coma y espacio vacío
		}
	}
	printf("98\n");  //Imprime el número 98 con un salto de línea siempre que termine una serie
}
