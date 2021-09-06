#include <stdio.h>
#include <stdlib.h>

typedef struct node{//this first "node" is a prototype to define the "node" inside
    int number;
    struct node *next;
} node; //without typedef I have to refer to this everytime as struct node 

int main(void){
    node *list = NULL;
    node *n = malloc(sizeof(node));
    if(!n){
        return 1;
    }
    n->number = 1; // (*n).number = 1;
    n->next = NULL;// (*n).next = NULL;

    list = n;

    n = malloc(sizeof(node));
    if(!n){
        free(list);
        return 1;
    }
    n->number=2;
    n->next = NULL;
    list->next = n;

    n = malloc(sizeof(node));
    if(!n){
        free(list->next);
        free(list);
        return 1;
    }
    n->number = 3;
    n->next = NULL;
    list->next->next = n;

    n = malloc(sizeof(node));
    n->number = 0;
    n->next = list;

    list = n;

    n = malloc(sizeof(node));
    n->number = 8;
    n->next = list->next->next;

    list->next->next = n;

    for(node *tmp = list; tmp != NULL; tmp = tmp->next){
        printf("%d\n", tmp->number);
    }

    while(list!=NULL){
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
    return 0;
}