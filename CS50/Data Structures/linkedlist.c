#include <stdio.h>
#include <stdlib.h>

typedef struct node{//this first "node" is a prototype to define the "node" inside
    int number;
    struct node *next;
} node; //without typedef I have to refer to this everytime as struct node 

int main(void){
    node *list = NULL;
    node *n = malloc(sizeof(node));
    if(n!=NULL){
        n->number = 1; // (*n).number = 1;
        n->next = NULL;// (*n).next = NULL;
    }
    list = n;
}