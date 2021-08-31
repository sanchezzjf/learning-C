#include <stdio.h>

typedef char* string;

int main(void){
    string s = "HI!";
    printf("%\n", s);
    printf("%p\n", &s[1]);
}