#include "main.h"

/**
 *_abs - Combrueba el valor de un numero entero
 *@n: Valor a calificar
 *
 * Return: -n si es negativo y n si es positivo
 *
 */
int _abs(int n)
{
	if (n < 0)  
	{
		return (-n);  //Si el valor es menor que cero, regresa ese valor pero con el signo '-'
	}
	else
	{
		return (n);  //Si el valor es mayor que cero, regresa ese valor asi como está
	}
}
