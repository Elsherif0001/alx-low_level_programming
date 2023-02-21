#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int su;

	for (su = '0'; su <= '9'; su++)
	{
		putchar(su);
		if (su != '9')
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
