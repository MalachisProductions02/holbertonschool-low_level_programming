#include "main.h"

/**
* print_to_98 - Imprime numeros del 0 al 98
*@n: Valor numerico
*
* Return: Always 0
*/
void print_to_98(int n)
{
    if (n <= 98)
    {
        for (; n < 98; n++)
        {
            if (n < 10)
            {
                _putchar('0' + n);
            }
            else
            {
                _putchar('0' + n / 10);
                _putchar('0' + n % 10);
            }
            _putchar(',');
            _putchar(' ');
        }
    }
    else
    {
        for (; n > 98; n--)
        {
            if (n < 10)
            {
                _putchar('0' + n);
            }
            else
            {
                _putchar('0' + n / 10);
                _putchar('0' + n % 10);
            }
            _putchar(',');
            _putchar(' ');
        }
    }
    _putchar('9');
    _putchar('8');
    _putchar('\n');
}
