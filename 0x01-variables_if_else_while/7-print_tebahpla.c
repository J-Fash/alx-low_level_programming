#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that prints the lowercase alphabet in reverse
 *
 * Return: Alway 0 (Success)
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');

	return (0);
}
