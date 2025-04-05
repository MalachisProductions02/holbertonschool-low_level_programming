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


/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Pointer to the number to modify
 * @index: Index of the bit to set, starting from 0
 * Return: 1 if it worked, or -1 if and error ocurred
 */
int set_bit(unsigned long int *n, unsigned int index);


/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Pointer to the number to modify
 * @index: Index of the bit to clear
 * Return: 1 if it worked, or -1 if an error ocurred
 */
int clear_bit(unsigned long int *n, unsigned int index);

int _putchar(char);

#endif /* MAIN_H */
