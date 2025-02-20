#include "main.h"  //Se llama a la nueva librería

/**
 * print_alphabet -Imprimir alfabeto usando libreria propia
 *
 * Return: 0
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);  //Básicamente el imprimir el abecedario con putchar pero con funciones perzonalidas del main.h
	}

	_putchar('\n');
}
