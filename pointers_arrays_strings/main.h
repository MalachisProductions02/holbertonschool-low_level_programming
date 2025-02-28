#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
 * void prototypes
 * char prototypes
 * int prototypes
 */
void reset_to_98(int *n);
void swap_int(int *a, int *b);
void swap_char(char *a, char *b);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
void reverse_array(int *a, int n);

char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);

int _swap_int(int *s);
int _putchar(char);
int _strlen(char *s);
int _atoi(char *s);
int _strcmp(char *s1, char *s2);

#endif /*MAIN_H*/
