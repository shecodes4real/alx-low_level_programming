#include "main.h"

/**
 * _islower - Shows 1
 *
 * otherwise show 0
 */
int _islower(int c)
{
	char i;
	int islower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			islower = 1;
	}

	return (islower);
}
