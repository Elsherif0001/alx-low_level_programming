#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point 
 * description: prints if a number is positive or negative.
 * Return 0 
 **/
int main(void)
{
	int n;

	srand(time(0));
		n= rand() - Rand_max / 2;
	/*print whether the number stored in thevariable n is positive or nedative*/
	if (n > 0)
		printf("%d is negative\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("5D IS ZERO\N", N);
	return (0);
}

