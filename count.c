#include <stdio.h>

int main(){
    //int i;
    for(int i = 1; i < 11; i++){
        if(i == 5 || i == 7){
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}