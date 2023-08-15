#include <stdio.h>
/**
 * main - main function
 *
 * description: print all possible combinations of single-digit numbers
 * return: always 0
 *
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
