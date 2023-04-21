#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	
       const char text[] = "and that piece of art is useful - Dora Korpar, 2015-10-19\n";
        int length = sizeof(text) - 1;

        write(STDERR_FILENO, text, length);
 
	return (1);
}
