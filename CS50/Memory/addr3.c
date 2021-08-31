#include <stdio.h>

typedef char* string;

int main(void){

    char* s = "HI!";

    printf("%c\n", *s); //s stores the address of the first char, then *s is "go to that address"
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%x\n", *(s+3));
}