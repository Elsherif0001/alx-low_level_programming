#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description : prints uppercase and lowercase
 *
 * Return Always 0 (Success)
 **/
int main(void)
{
	int sr;
	int us;

	for (sr = 'a'; sr <= 'z'; sr++)
		putchar(sr);
	for (us = 'A'; us <= 'Z'; us++)
		putchar(us);
	putchar('\n');
	return (0);
}
