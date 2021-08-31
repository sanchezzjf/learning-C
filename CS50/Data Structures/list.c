#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *list = malloc(3*sizeof(int)); // int list[3];
    if(!list){
        return 1;
    }
    list[0] = 1;// *list = 1
    list[1] = 2;// *(list+1) = 2
    list[2] = 3;// *(list+2) = 3

    //reallocates(expand) the same chunk of memory used before
    int *tmp = realloc(list, 4*sizeof(int)); //malloc(4*sizeof(int));
    if(!tmp){
        free(list);
        return 1;
    }
    //for(int i=0;i<3; i++){
    //    tmp[i] = list[i];
    //}
    tmp[3] = 4;

    free(list);
    list = tmp;
     for(int i=0;i<4;i++){
         printf("%d\n", list[i]);
     }
}