#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int t, y, u;

	for (t = '0'; t <= '9'; t++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (u = '0'; u <= '9'; u++)
			{
				if (t < y && y < u)
				{
					putchar(t);
					putchar(y);
					putchar(u);

					if (t != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
