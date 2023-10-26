#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - find natural square root
 * @n: int
 * @val: square root
 * Return: int
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(int n, 1));
}

/**
 * square - find square root
 * @n: int
 * @val: square root
 * Return: int
*/
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
