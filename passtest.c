#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char passwd[20];
    int lower = 0;
    int upper = 0;
    int digit = 0;
    int spChar = 0;
    printf("Enter a password: ");
    scanf("%s", &passwd);
    for(int i=0;i<20;++i){
        if(islower(passwd[i])){
            lower++;
        }
        if(isupper(passwd[i])){
            upper++;
        }
        if(isdigit(passwd[i])){
            digit++;
        }
        if(ispunct(passwd[i])){
            spChar++;
        }
    }
    if(lower*upper*digit*spChar != 0){
        printf("Strong!\n");
    }else{
        printf("Weak!\n");
    }
    return 0;
}