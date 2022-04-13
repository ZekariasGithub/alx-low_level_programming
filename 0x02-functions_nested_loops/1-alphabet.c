#include "main.h"
/**
*print_alphabet - prints alphabets in lowercase , then prints new line
*Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
