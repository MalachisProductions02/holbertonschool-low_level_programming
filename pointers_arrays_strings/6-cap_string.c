#include "main.h"

/**
 * cap_string - Capitalizes all words for a string
 * @str: Parameter
 * Return: Answer for the function
 */
char *cap_string(char *str)
{
	int i, j;
	cap sep[] = " \t\n,;.!?\"(){}";

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	i = 1;

	while (str[i])
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i - 1] == sep[j])
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
				}
				break;
			}
		}
		i++;
	}
	
	return (str);
}
