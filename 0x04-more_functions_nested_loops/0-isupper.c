# include "main.h"

/**
 * main - check if character is uppercase or not
 * @c: character to be tested
 * Return: 1 whether it is, 0 others
 */
int _isupper(int c)
{
	if ((c >= 65) && (c < 91))
	{
		return (1);
	}
	else
	{

		return (0);
	}
}
