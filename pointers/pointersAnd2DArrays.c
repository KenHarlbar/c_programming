#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int A[2][3] = {
			{1, 2, 3},
			{4, 5, 6}
			};

	int i, j;
	// print the address and values of the 2-D arra		y
	for (i = 0; i < 2; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			printf("Address %d of %d is: %d\n", j, i, (&A[i][j]));
			printf("Value at address = %d\n", *(*(A+i)+j));
		}
	}

	return 0;
}
