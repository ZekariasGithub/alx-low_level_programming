#include "main.h"
/**
*_islower - checks for lowercase character c
*@c the character to be checked
*Return: 1 if character is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (islower(c)	== !0)
		return (1);
	else
		return (0);
}
