#include <stdio.h>
/**
 * main-program entry point
 * Descriptio: prints all possible combinations of two two-digit numbers
 * Return:0 if no error, non zero if error
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			pputchar('0' + i / 10);
			putchar('0' + i % 10);

			putchar(' ');

			putchar('0' + j / 10);
			putchar('0' + i j % 10);

			if (i == 98 && j == 99)
				break
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
