#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point, prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}	
