#include "main.h"
#include "6-abs.c"
/**
*print_last_digit - display the last digit of an intiger
*@n: the integer to be checked
*Return: the last idgit of an integer
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	last_digit = _abs(last_digit);

	return (last_digit);
}
