#include <stdio.h>

/**
 * main - Imprimir numeros en base 10 sin el 10 JAJAJAJAJAJ
 *
 * Return: I think is 0...I have doubths...  //Soy yo del futuro, regresa cero cuando son funciones void, es 1 cuando se espera una respuesta en el Return y es int
 *
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);  //Imprime secuencia de números del 0 al 9 imprimiendo solo un caracter a la vez
	}

	putchar('\n');

	return (0);
}
