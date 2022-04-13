#include "main.h"
/**
*print_alphabet - prints alphabets in lowercase , then prints new line
*Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
	for (int i = 0; i < 10; i++)
	{

			char letter;

			for (letter = 'a'; letter <= 'z'; letter++)
				_putchar(letter);

			_putchar('\n');
	}
