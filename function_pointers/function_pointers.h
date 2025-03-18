#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/**
 * print_name - Llama a la funcion
 * @name: Nombre a imprimir
 * @f: Puntero a la funcion que imprime el nombre
 */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */
