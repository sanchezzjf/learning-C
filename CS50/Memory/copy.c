#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "cs50.h"

int main(void){

    char *s;     // to copy a string you need to allocate a new chunk of memory
                 // otherwise your gonna just point to the same address and not make any copy
    printf("s: ");
    scanf("%s", s);

    char *t = malloc(strlen(s)+1); //allocates the memory for each char + \0

    if(t == NULL){ //if it goes out of memory QUIT
        return 1;
    }

    for(int i=0,n=strlen(s); i <= n;i++){ //this is the hard way of doing strcpy(t, s);
        t[i] = s[i]; // *(t+1) = *(s+1); the [] notation is equivalent to pointer arithmetic
    }
    if(strlen(t) > 0){
        *t = toupper(*t); // *t = toupper(*t) because it's pointed to the first address of the chars
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t); //Deallocate memory used
}