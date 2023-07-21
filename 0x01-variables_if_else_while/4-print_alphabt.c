#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase except q amd e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}



