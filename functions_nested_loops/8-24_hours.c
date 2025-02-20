#include "main.h"

/**
 * jack_bauer - Imprime cada minuto del reloj en formato 24 hrs
 *
 *Return: 0
 *
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)  //Horas establecidas a 0, si las horas son menores que 24, entonces se les suma uno
	{
		for (minute = 0; minute < 60; minute++)  //MInutos establecidos a cero, si los minutos son menores que 60, entonces se le suma uno
		{
			_putchar('0' + hour / 10);  //Suma el ASCII de cero a horas y lo divide entre 10 para sacar decenas
			_putchar('0' + hour % 10);  //Suma el ASCII de cero a horas y calcula unidades
			_putchar(':');  //Solo imprime los ':'
			_putchar('0' + minute / 10);  //Suma el ASCII de cero a minutos y lo divide entre 10 para calcular decenas
			_putchar('0' + minute % 10);  //Suma el ASCII de cero a minutos y calcula unidades
			_putchar('\n');
		}
	}
}
