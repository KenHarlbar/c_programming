#include<stdio.h>
#include<stdlib.h>

char print(char *C)
{
	while (*C != '\0')
	{
		printf("%c", *C);
		C++;
	}
	printf("\n");
}

int main ()
{
	char C[] = "Hello";
	print(C);

	return 0;
}
