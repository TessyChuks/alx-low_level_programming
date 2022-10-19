#include <stdio.h>

/**
 * print_to_98 - print natural no to 98
 *
 * @n: beginning number
 *
 * Return: 0
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
	       printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
