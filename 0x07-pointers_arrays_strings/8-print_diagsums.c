#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - desctiption
 * @a: 2d array of int types
 * @size: size of array (squara)
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
