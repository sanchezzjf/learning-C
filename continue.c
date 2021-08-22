#include <stdio.h>
#include <stdlib.h>

void forLoop(){
    for(int i=0; i <= 10; ++i){
        if(i==5||i==8){
            continue;
        }
        printf("for loop: %d\n", i);
    }
}

int main(){
    int num = 0;
    while(num <= 10){
        if(num == 5 || num == 8){
            num++;
            continue;
        }
        printf("while loop: %d\n", num);
        num++;
    }
    forLoop();
    return 0;
}