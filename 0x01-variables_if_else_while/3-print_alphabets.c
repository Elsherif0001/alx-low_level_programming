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
	int sr;
	int bl;

	for (sr = 'a'; sr <= 'z'; sr++)
		putchar(sr);
	for (bl = 'A'; bl <= 'Z'; bl++)
		putchar(bl);
	putchar('\n');
	return (0);
}
