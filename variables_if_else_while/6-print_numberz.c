#include <stdio.h>

/**
 * main - Imprimir numeros en base pero sin usar char XD
 *
 * Return: Always 0 :D
 *
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n); //Lo único que cambia es que no se usa char, sino int
	}

	putchar('\n');

	return (0);
}
