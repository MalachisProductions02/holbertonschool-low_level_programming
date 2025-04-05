#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys / stat.h>
#include <stdlib.h>

/**
 * read_textfile - Reads the text file and prints it
 * @filename: File's name
 * @letters: Number of letters to read and print
 * Return: THe actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters);

int _putchar(char);
int create_file(const char ¨filename, char *text_content);

#endif /* MAIN_H */
