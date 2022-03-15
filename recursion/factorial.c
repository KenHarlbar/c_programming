#include <stdio.h>

/**
 * factorial - Compute and display the factorial of any number
 *
 * main - Prompt the user for an integer and pass it to factorial
 *
 * @a: argument for the function, factorial
 *
 * Return: Always 0 (Success)
 */
int factorial(int *a)
{
	unsigned long long int multiply = 1, i;

	/* Print 1 if the number entered is 0 or 1*/
	if (*a == 0 || *a == 1)
	{
		printf("%d! is 1", *a);
	} else /* Print the factorial */
	{
		for (i = (unsigned long long int)*a; i > 1; --i)
		{
			multiply *= i;
		}
		printf("%d! is %llu", *a, multiply);
	}
}

int main(void)
{
	/* Prompt the user for any number */
	int n;

	printf("Enter an integer: ");
	scanf("%d", &n);

	/* Compute and display the factorial of the number n */
	factorial(&n);
	return (0);
}
