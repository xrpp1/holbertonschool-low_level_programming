#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 4; j++)
		{
			printf("%d", i * j);
			if (!(i == 4 && j == 4))
			{
				printf(" ");
			}
		}
		printf(" ");
	}
	printf("\n");

	return (0);
}
