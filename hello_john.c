#include <stdio.h>

int main(){
    char name;
    printf("Heeey, what's your name? ");
    scanf("%s",&name);     
    printf("Fuck you %s.\n", &name);  
    return 0;
}

