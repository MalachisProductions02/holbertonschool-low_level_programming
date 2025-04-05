#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>

/**
 * read_textfile - Reads the text file and prints it to the POSIX standard output
 * @filename: File's name
 * @letters: Number of letters to read and print
 * Return: THe actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters);

int _putchar(char);

#endif /* MAIN_H */
