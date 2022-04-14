#include "main.h"
/**
*print_last_digit - display the last digit of an intiger
*@n: the integer to be checked
*Return: the last idgit of an integer
 */

int print_last_digit(int n)
{
	int hour, minute;

	for (hour =0; hour <= 23; hour++)
	{
		for (minute = 0; minute <=59; minute++)
		{
			_putchar((hour /10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
