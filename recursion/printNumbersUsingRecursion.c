#include <stdio.h>

/**
  *
  * Return: Always 0 (Success)
  */
void even();
void odd();
int n = 1;

int main(void)
{
	odd();
	return (0);
}

void even()
{
	if (n <= 10)
	{
		printf("%d ", n-1);
		n++;
		odd();
	}
	return;
}

void odd()
{
	if (n <= 10)
	{
		printf("%d ", n+1);
		n++;
		even();
	}
	return;
}
