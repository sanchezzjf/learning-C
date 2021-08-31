#include <stdio.h>

int array[10] = {0,1,2,3,4,5,6,7,8,9};
int bSearch(int* value[]);
int main(int argc, char* argv[]){
    if(argc < 2){
        printf("Not enough arguments.\n");
    }else if(argc > 2){
        printf("Too many arguments.\n");
    }else{
        bSearch(argv[1]);
    }
    printf("%d", array[0]);
    return 0;
}

int bSearch(int* value[]){
    int middle = sizeof(array) /2;
    printf("%d\n", middle);
    return 0;
}