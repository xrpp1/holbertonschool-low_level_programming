#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			printf("%d", i * j);
			if (j < 10)
			{
				printf("\t");
			}
		}
		printf("\n");
	}

	return (0);
}
