#include <stdio.h>
/**
 *main - prints first 50 fibonaccci nos
 *
 *Return: Always 0
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum, totSum;

	for (count = 0; count < 50 || sum < 4000000; count++)
	{
		sum = fib1 + fib2;
		if ((sum % 2) == 0)
			totSum += sum;

		fib1 = fib2;
		fib2 = sum;
		sum = fib1 + fib2;

		if (totSum >= 4000000)
			break;
	}
	printf("%.of\n", totSum);

	return (0);
}
