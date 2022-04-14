#include <stdio.h>
/**
 *main - lists all the natural multiples of 3 @ 5 beloq 1024
 *
 *Return: Always 0
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			num += i;
	}

	printf("%d\n", sum);

	return(0);
}
