#include "main.h"

/**
 * more_numbers - prints more numbers
 */

void more_numbers(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				putchar((j / 10) + 48);
			}

			putchar((j % 10) + 48);

		}

		putchar('\n');

		i++;
	}
}
