#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int len = 0;
	int o;

	while (*s != '\0')
	{
		len++;
		S++;
	}

	S--;
	for (o = len, o > 0, o--)
	{
		_putchar(*s);
		S--;
	}

	_putchar('\n');
}
