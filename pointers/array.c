#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int a[] = {2, 4, 5, 6, 7, 9};
	for (int i = 0; i < 6; ++i){
		printf("Address of %d: %d\n", *(a + i), a+i);
		printf("Value in the address above: %d\n", *(a+i));
	}
}
