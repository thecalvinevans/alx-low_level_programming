#include "main.h"
#include <stdio.h>

/**
 * main - prints a FIZZ BUZZ program
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
	if ((x % 3 == 0) && (x % 5 == 0))
	{
	printf("FIZZBUZZ");
	}
	else if (x % 3 == 0)
	{
	printf("FIZZ");
	}
	else if (x % 5 == 0)
	{
	printf("BUZZ");
	}
	else
	{
	printf("%d", x);
	}
	if (x != 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);
}
