#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char string[50];

	printf("Enter a sentence: ");
	fgets(string, sizeof(string), stdin);

	int len = strlen(string);
	for (int i = len; i >= 0; i--)
	{
		printf("%c", string[i]);
	}
	return (0);
}
