#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
 */

int main(void)
{
	char a = 'z';

	for (; a >= 'a' ; a--)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
