#include "main.h"
/**
 * print_alphabet function using the _putchar function
 *
 * Return: void
 */
void print_alphabet(void)

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
