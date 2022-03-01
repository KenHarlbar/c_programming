#include<stdio.h>
#include<stdlib.h>

int main()
{
    int B[2][3] = {
                {
                    2, 3, 6
                },
                {
                   4, 5, 8
                }
            };


    printf("%d\n", B);
    printf("%d\n", *B);
    printf("%d\n", B[0]);
    printf("%d\n", &B);

    return 0;
}
