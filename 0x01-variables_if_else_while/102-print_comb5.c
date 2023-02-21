#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * description :prints all possible combinations of two two-digit
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int f, g;

	for (f = 0; f <= 98; f++)
	{
		for (g = f + 1; g <= 99; g++)
		{
		putchar((f / 10) + '0');
		putchar((f % 10) + '0');
		putchar(' ');
		putchar((g / 10) + '0');
		putchar((g % 10) + '0');

		if (f == 98 && g == 99)
			continue;
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
