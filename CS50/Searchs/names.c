#include <stdio.h>
#include <string.h>

int main(void){
    char* names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};
    for(int i=0;i<7;i++){
         if(strcmp(names[i], "Ron") == 0){
             printf("found in %d iterations\n", i+1);
             return 0;
         }
    }
    printf("Not found\n");
    return 1;
}