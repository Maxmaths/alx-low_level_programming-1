#include "main.h"

/**
  *print_to_98 - print ints from n to 98
  *@n: start
  */

void print_to_98(int n)
{
	int num;

	for (num = n; num <= 98; num++)
	{
		_putchar(num + '0');
		putchar(',');
		putchar(' ');
	}
}