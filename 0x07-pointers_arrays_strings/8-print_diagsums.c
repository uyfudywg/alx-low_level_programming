#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return Always 0 (success)
*/

void print_diagsums(int *a, int size)
{
	int it, t1 = 0, t2 = 0;

	for (it = 0; it < size; it++)
	{
		t1 += a[it];
		t2 += a[size - it - 1];
		a += size;
	}
	printf("%d, ", t1);
	printf("%d\n, ", t2);
}
