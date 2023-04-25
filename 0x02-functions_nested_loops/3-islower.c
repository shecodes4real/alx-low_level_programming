#include "main.h"

/**
 * _islower - Shows 1
 *
 * otherwise show 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
