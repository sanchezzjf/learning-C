#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){

    char hello[] = "Hello World"; //sabemos que cada caracter tem 1 byte(sendo assim 12bytes 10bytes(letras)+1byte(espaço)+1byte(nulo))

    printf("from main: %d\n", &hello); 
    // *variavel define um ponteiro
    char *hello2 = malloc(sizeof(hello)); //aloca no heap(ponteiro)
    //hello2 possui apenas o endereço do primeiro byte do array(string )
    strcpy(hello2, hello); //string copy 
    printf("hello2: %x\n", hello2);

    char *hello3 = hello2 +6;   //ponteiro para World
    printf("from hello2: %s\n", hello2);
    printf("from hello3: %s\n", hello3);

    return;
}   