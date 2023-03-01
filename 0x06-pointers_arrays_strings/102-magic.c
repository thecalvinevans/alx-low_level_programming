#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int a[5] = {98, 102, 402, 1024, 4096};
int *p;

p = &a[0];
*(p + 2) = 98; /*...so that this prints 98\n */
printf("a[2] = %d\n", *(p + 2));

return (0);
}

