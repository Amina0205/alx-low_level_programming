#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * Owned By Bwave
 * @a: int to check
 * @n: int to check
 * Return: 0 (Success)
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	printf("\n");
}
