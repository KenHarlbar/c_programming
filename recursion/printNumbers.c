#include <stdio.h>

/**
  * main - print numbers 1 to 10 such that if a number is even, 
  * it is reduced by one and if odd, it is increased by 1
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	/* Declare variable for iteration */
	int i;

	for (i = 1; i <= 10; i++)
	{
		if (i % 2 == 1 || i == 1)
		{
			printf("%d ", i+1);
		}
		if (i % 2 == 0)
		{
			printf("%d ", i-1);
		}
	}
	return (0);
}
