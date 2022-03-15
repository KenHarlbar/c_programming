#include <stdio.h>

/**
 * fact - compute the factorial of n
 *
 * main - prompt for an integer n and display it's factorial
 *
 * @n: integer from user
 *
 * Return: Always 0 (Success)
 */
int fact(int n)
{
	if (n == 1)
	{
		return (1);
	}
	return (n * fact(n - 1));
}

int main(void)
{
	/* Prompt the user for an integer */
	int n, result;

	printf("Enter an integer: ");
	scanf("%d", &n);

	/* Pass the integer to the function fact to compute the factorial */
	result = fact(n);
	printf("The factorial of the number %d is: %d", n, result);
	return (0);
}
