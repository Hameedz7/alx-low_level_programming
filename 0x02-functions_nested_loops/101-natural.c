#include "main.h"


/**
 * main - check the code.
 *
 * Return: Always 0.
 */


int main(void)
{
	print_times_table(3);
	_putchar('\n');
	print_times_table(5);
	_putchar('\n');
	print_times_table(98);
	_putchar('\n');
	print_times_table(12);
	return (0);
}




Question 102
#include <stdio.h>


/**
  * main - prints the first 52 fib
  * Return: 0.
  */


int main(void)
{
	int i = 0;
	long j = 1, k = 2;


	while (i < 50)
	{
	if (i == 0)
	printf("%ld", j);
	else if (i == 1)
	printf(", %ld", k);
	else
	{
	k += j;
	j = k - j;
	printf(", %ld", k);
	}
	++i;
	}
	printf("\n");
	return (0);
}
