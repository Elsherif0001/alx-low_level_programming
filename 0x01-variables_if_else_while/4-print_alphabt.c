#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 **/
int main(void)
{
	char sr, e, q;

	e = 'e';
	q = 'q';

	for (sr = 'a'; sr <= 'z' ; sr++)
	{
		if (sr != e && sr != q)
		putchar(sr);
	}
	putchar('\n');
	return (0);
}
