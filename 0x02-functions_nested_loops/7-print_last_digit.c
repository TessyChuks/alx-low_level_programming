#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: an integer input
 * Return: value of the last digit n
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;
	_putchar(last + '0');

	return (last);
}
