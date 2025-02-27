#include "main.h"

/**
 * _atoi - Transforma string en numeros
 * @s: Parametro
 * Return: El valor en enteros del string
 */
int _atoi(char *s)
{
	int sign = 1; result = 0; i = 0;
	int  fn = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			fn = 1;
		}
		else if (fn)
		{
			break;
		}
		i++;
	}

	return (result * sign);
}			
