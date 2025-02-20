#include "main.h"

/**
 * _islower - Checker que identifica un caracter si es minuscula
 *@n: Caracter para ser checado
 * Return: 1 si es minuscula, 0 si no lo es
 *
 */
int _islower(int n)
{
	if (n >= 'a' && n <= 'z') //Esto básicamente es un filtro que detecta si los caracteres estan en minúscula para regresar 1 (osea verdadero)
	{
		return (1);  //Verdadero
	}
	else
	{
		return (0);  //Si está en mayúsculas o es otro caracter, regresa cero (osea falso)
	}
}
