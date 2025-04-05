#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned int
 * @b: Pointer to a string containing 0 and 1 characters
 * Return: The converted unsigned int value, or 0 if the string is invalid
 */
unsigned int binary_to_uint(const char *b);


/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n);


/**
 * get_bit - Returns the value of a bit at a given index
 * @n: THe number to extract the the bit from
 * @index: The index of the bit, starting from 0
 * Return: Value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index);

int _putchar(char);

#endif /* MAIN_H */
