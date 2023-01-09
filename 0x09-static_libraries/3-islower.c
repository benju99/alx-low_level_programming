#include "main.h"

/**
 * _islower - checks if the character is lowercase
 * @c: is the character to be checked
 * Returns: 1 if char is lowercase, otherwise 0.
 * Return: 0 success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
