#include<stdio.h>
/**
 * main - Entry point
 * description::print prints the alphabet in lowercase, followed by a new line
 * Return: alawys 0 (success)
*/
int main(void)
{

	char ch = 'a';

	char cH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar ('\n');
	while (cH <= 'Z')
	{
		putchar(cH);
		cH++;
	}
	putchar ('\n');
	return (0);
}
