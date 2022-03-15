#include <stdio.h>

/**
 * main - Prompt the user for an integer
 *
 * fib - Compute and display the fibonacci sequence of a given number
 *
 * Return: Always 0 (Success)
 */
int fib(int *n)
{
	if (*n <= 1)
	{
		return *n;
	}
	int f, f1 = 0, f2 = 1;
	for (int i = 2; i <= *n; ++i)
	{
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	return f;
}

int main()
{
	/* Prompt the user for n */
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);

	/* Pass the integer to function fib */
	int result = fib(&n);
	printf("%d", result);
	return (0);
}
