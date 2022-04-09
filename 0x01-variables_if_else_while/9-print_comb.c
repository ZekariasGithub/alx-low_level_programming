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
	char a;

	for (a = 48; a <= 57 ; a++)
	{
		putchar(a);
		if (a == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	for (a = 97; a <= 102; a++)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
