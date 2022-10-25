#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @s: character to check
 * Return: 0
 */
int _strlen(char *s)
{
	int q = 0;

	for (; *s++;)
		q++;
	return (q);
}
