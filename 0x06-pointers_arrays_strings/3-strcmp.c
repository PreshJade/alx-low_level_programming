#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: The first string
 * @s2: The secong string
 * Return: The results of the comparison between the 2 strings
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
