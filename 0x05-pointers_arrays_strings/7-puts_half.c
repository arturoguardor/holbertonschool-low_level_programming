#include "holberton.h"

/**
	* puts_half - updates the value it points to to 98.
	* @str: a variable as referencia
	* followed by a new line.
	* Return: none.
	*/

void puts_half(char *str)
{
	int i, j;
for (; str[i] != '\0' ; i++)
	{
	}
if (j % 2 != 0)
{
	j = (i - 1) / 2;
	for (; j <= i ; j++)
	{
		_putchar(str[j]);
	}
}
else
{
	j = i / 2;
	for (; j <= i ; j++)
	{
		_putchar(str[j]);
	}
}
_putchar('\n');
}