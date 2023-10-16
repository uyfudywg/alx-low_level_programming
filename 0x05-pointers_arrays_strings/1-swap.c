#include "main.h"
/**
 * swap_int - swaps the values of two integers
 *          using two input parameters
 * @a: integer to swap
 * @b: integer to swap
 *
 * Return:nothing
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
