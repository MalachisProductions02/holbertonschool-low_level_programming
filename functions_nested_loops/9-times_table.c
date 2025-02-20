#include "main.h"

/**
 * times_table - Imprime la tabla de multiplicar del 0 al 9
 *
 * Return: 0
 */
void times_table(void)
{
	int n, c, result;

	for (n = 0; n < 10; n++)  //n declarada en cero, si n es menor que 10, entonces se le suma uno
	{
		for (c = 0; c < 10; c++)  //c declarada en cero, si c es menor que 10, entonces se le suma uno
		{
			result = n * c;  //Se multiplica n por c

			if (c != 0)  //Si c no es cero, entonces...
			{
				_putchar(',');  //Imprime la coma
				_putchar(' ');  //Imprime el espacio vacío

				if (result < 10)  //Detecta que el resultado sea menor que 10
				{
					_putchar(' ');  //Si lo es, entonces imprimirá un espacio vacío
				}
			}

			if (result >= 10)  //Si el resultado es mayor o igual a 10...
			{
				_putchar('0' + (result / 10));  //Suma el ASCII de cero a la conversión a decenas
				_putchar('0' + (result % 10));  //Suma el ASCII de cero a la conversión a unidades
			}
			else
			{
				_putchar('0' + result);  //Suma el ASCII de cero al resultado para asegurar que sea un número y no otro caracter
			}
		}
		_putchar('\n');
	}
}
