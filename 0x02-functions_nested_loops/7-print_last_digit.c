#include "main.h"
/**
*print_last_digit - display the last digit of an intiger
*@n: the integer to be checked
*Return: the last idgit of an integer
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = _abs(n % 10);

	return (last_digit);
}
