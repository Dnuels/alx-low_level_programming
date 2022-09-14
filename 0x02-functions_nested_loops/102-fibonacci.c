#include <stdio.h>

/**
 * main - something
 * Return: something
 */
int main(void)
{
	long int i, j, k;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		} else
		{
			printf("%ld\n", j);
		}
		j = k;
		k = 1;
	}
	return (0);
}
