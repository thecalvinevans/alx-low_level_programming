#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	chsr c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}

