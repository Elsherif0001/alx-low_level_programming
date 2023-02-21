#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int q, v;

	for (i = '0'; i <= '9'; i++)
	{
		for (v = '0'; v <= '9'; v++)
		{
		if (q < v)
		{
			putchar(q);
			putchar(v);
			if ((q != '8' || (q == '8' && v != '9')))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	}
	putchar ('\n');
	return (0);
}
