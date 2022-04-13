#include "main.h"
/**
*print_alphabet_x10 - prints alphabets in lowercase,then prints new line 10 time
*Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
	}
}
