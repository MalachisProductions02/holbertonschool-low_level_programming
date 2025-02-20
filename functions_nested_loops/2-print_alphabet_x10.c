#include "main.h"
/**
 * print_alphabet_x10 - Imprime el alfabeto 10 veces
 *
 * Return: Al ser void, no se devuelve nada :)
 *
 */
void print_alphabet_x10(void)
{
	int n;
	char c;

	for (n = 0; n < 10; n++)  //Determinamos n como 0 y si es menor que 10, se le suma uno
	{
		for (c = 'a'; c <= 'z'; c++)  //Declaramos c como a y se le suma uno cada vez que imprime un caracter
		{
			_putchar(c);  //Impresión de los caracteres de a a la z hasta que n sea 10
		}

		_putchar('\n');  //Salto de línea
	}
}
