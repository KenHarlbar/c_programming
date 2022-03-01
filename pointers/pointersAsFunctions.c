#include<stdio.h>
#include<stdlib.h>
// This is a program to add two values using their pointers and also return the pointer

// a function to print hello world
void printHelloWorld(){
    printf("Hello, World!\n\n");
}

// This is a function to perform the addition
int Add(int* a, int* b){ // an addition function that takes two inputs
    int c = (*a)+(*b);
    return c;
}

int main()
{
    int a = 4, b = 5;
    int c = Add(&a, &b);
    printHelloWorld();
    printf("%d", c);

    return 0;
}
