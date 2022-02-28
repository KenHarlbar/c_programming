#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){

    FILE* fptr;
    fptr = fopen("program.txt", "w");

    if (fptr == NULL){
        printf("Error");
        exit(1);
    }

    fprintf(fptr, "Files are cool.");

    fclose(fptr);

    return 0;
}
