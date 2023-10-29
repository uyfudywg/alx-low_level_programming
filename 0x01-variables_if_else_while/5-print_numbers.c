#include<stdio.h>
/**
 * main - Entry point 
 *
 * description:print from 0 to 9 
 *
 * Return Always 0 (success)
*/

int main(void)
{

	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
