#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main(void){
    int x = 1;
    int y = 2;

    printf("x: %i\ny: %i\n", x , y);
    swap(&x, &y);
    printf("x: %i\ny: %i\n", x , y);
}

void swap(int *a, int *b){
    int tmp = *a; //store in tmp whatever is in a
    *a = *b; //go to a and store whatever is in b
    *b = tmp;//go to be and store what is in tmp
}