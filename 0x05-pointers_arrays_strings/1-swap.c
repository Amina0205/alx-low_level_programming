#include "main.h"

/**
 * swap_int - swaps the value of int a and int b
 * Owned By Bwave/Bright
 * @a: first int
 * @b: second int
 * Return: 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}

