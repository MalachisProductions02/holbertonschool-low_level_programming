#include "main.h"

/**
 * _isalpha - Revisa que el caracter sea una letra
 * @c: Caracter a checar
 *
 * Return: 1 si es letra o 0 si es otra cosa XD
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))  //Filtro para detectar si los caracteres son letras
	{
		return (1);  //Verdadero
	}
	else
	{
		return (0);  //Falso
	}
}
