#include <stdio.h>

/**
 * main - Oh sh+t, here we go again...
 *
 * Return: Ya te la sabes, es 0
 *
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	//Imprime el valor del tamaño de varios tipos de computadoras donde corre el código
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
