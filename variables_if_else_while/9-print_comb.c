#include <stdio.h>

/**
 * main - Imprimir serie de numeros separados por espacio y comas
 *
 * Return: 0, I'm sure 100% :D
 *
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);  //Imprime una serie numérica

		if (n != '9')
		{
			putchar(',');  //Si el número no es 9, imprimirá una coma después del número
			putchar(' ');  //Después de la coma, imprimirá un espacio en blanco
		}
	}

	putchar('\n');

	return (0);
}
