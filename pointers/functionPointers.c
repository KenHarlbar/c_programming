#include<stdio.h>

/*
    Here is a program to add two numbers and print the result using function pointers
*/

// A function to perform the addition operation
int Add(int a, int b){
    return a+b;
}

// A function to print Hello
void printHello(char *name){
    printf("Hello %s\n", name);
}

int main(){

    // here's a variable to store the value the function Add returns
    int c;

    // create the pointer of the function Add
    int (*p)(int, int);

    // assign the address of Add to p
    p = Add;

    // Use the pointer to call the function and perform an operation
    c = p(2, 3);

    // print c, i.e the result of the function
    printf("%d", c);

    // create the pointer of the function printHello
    void (*ptr)();
    ptr = printHello;
    ptr("Tom");

    return 0;
}
