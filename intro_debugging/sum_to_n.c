#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 10;
	int sum = 0;
	int i;

	for (i = 1; i <= n; i++)
	{
		sum += i;
	}

	printf("Sum from 1 to %d is %d\n", n, sum);

	return (0);
}
