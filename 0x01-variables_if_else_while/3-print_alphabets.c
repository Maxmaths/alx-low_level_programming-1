#include <stdio.h>
#include <ctype.h>

/**
  *main - prints alphabet from a to z
  *Return: returns 0 on success
  */

int main(void)
{
	 char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar(toupper(ch))
	}
	putchar('\n');

	return (0);
}
