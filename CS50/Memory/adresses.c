#include <stdio.h>
#include <stdlib.h>

int main(void){

    int n = 50;
    int *p = &n; //"go to"p = "address of" n

    printf("%p\n", *p);
    //p is a address in line 7
    //with the star operator it becomes a "go to " that address printing the actual value
}