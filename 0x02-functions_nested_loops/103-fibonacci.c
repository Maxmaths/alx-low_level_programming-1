#include <stdio.h>


void fibonacci(long int a, long int b);

/**
  *main - fibbonacci sequence
  *Return: returns 0 on success
  */

int main(void)
{
	unsigned long sum, a, b, limit;
	
	a = 1;
	b = 2;
	limit = 4000000;
	sum = 0;

	while (b < limit)
	{
		if ((b % 2) == 0)
		{
			sum = sum + b; 
		}
		unsigned long temp = a;
		a = b;
		b = temp + a;
	}
	printf("%lu\n",sum);

	return (0);
}
