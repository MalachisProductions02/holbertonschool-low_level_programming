#ifndef MAIN_H
#define MAIN_H

/**
 * void prototype
 * char prototype
 * int prototype
 * unsigned prototype
 */
void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);

char *string_nconcat(char *s1, char *s2, unsigned int n);

int _putchar(char);
int *array_range(int min, int max);

#endif /*MAIN_H*/
