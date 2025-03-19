#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Imprime numeros
 * @separator: Cadena a imprimir
 * @n: Número de enteros
 * Description: Si separator es NULL, no imprime
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;


	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i != n -1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
