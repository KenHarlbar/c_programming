#include<stdio.h>
#include<stdlib.h>

int main()
{
    char C[20];
    C[0] = 'J';
    C[1] = 'O';
    C[2] = 'H';
    C[3] = 'N';
    C[4] = '\0';

    printf("%s\n", C);
    printf("%lu\n", sizeof(C));

    return 0;
}
