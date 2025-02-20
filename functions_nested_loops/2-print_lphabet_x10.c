#include "main.h"
//Esta está de la vrga es poco debido a que el _putchar DEBERÍA estar DENTRO del ciclo for y el nombre del archivo esta mal XD
//Así es banda, se me fue el commit pipipi
/**
 * print_alphabet_x10 - IMprime el alfabeto 10 veces
 *
 * Return: 0
 *
 */
void print_alphabet_x10(void)
{
	int n;
	char c;

	for ( n = 0; n < 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}

	_putchar('\n');
}
