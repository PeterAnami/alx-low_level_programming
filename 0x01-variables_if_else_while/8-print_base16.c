#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
