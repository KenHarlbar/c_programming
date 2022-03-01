#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int i;
    /*int A[n];
    printf("Enter a number: ");
    for (i = 0; i < n; ++i){
        scanf("%d", (A + i));
    }
    for (i = 0; i < n; ++i){
        printf("%d\n", *(A + i));
    }*/
    int *A = (int*)malloc(n * sizeof(int));

    // assign each element in the array a value
    for (i = 0; i < n; ++i){
        *(A+i) = i + 1;
    }

    //reallocate the memory of A
    int *B = (int *)realloc(NULL, n*sizeof(int));
    printf("Previous block address: %d   New block address: %d\n", A, B);
    for (i = 0; i < n; ++i){
        printf("%d\n", *(B+i));
    }

    return 0;
}
