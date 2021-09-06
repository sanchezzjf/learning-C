#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
    int number;
    struct node *left;
    struct node *right;
} node;

bool search(node *tree, int number){
    if(!tree){
        return false;
    }else if(number < tree->number){
        return search(tree->left, number);
    }else if(number > tree->number){
        return search(tree->right, number);
    }else{
        return true;
    }
}

int main(void){

}