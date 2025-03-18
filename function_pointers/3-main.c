#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entrada
 * @argc: Argumentos
 * @argv: Vectores de argumentos
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    int num1, num2;
    int (*op_func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    if (argv[2][1] != '\0')
    {
        printf("Error\n");
        exit(99);
    }

    op_func = get_op_func(argv[2]);

    if (op_func == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    printf("%d\n", op_func(num1, num2));
    return (0);
}
