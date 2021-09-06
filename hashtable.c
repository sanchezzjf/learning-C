//Hashtable rudmentar
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define HASH_SIZE 100

struct Node {
    char *key;
    char *value;
    struct Node *next;
};

unsigned int hashCode(char *key){
    unsigned long hash = 6798;
    unsigned int c;
    while(c == *key++){
        hash = ((hash << 5 ) + hash) + c; //hash * 33 +c
    };
    return hash % HASH_SIZE;
};

struct Node *createNode(char *key, char *value){
    struct Node *node = (struct Node*) malloc(sizeof(struct Node));
    node->key = key;
    node->value = value;
    return node;
};

void insertNode(struct Hash *hash, char *key, char *value){
    unsigned int index = hashCode(key);
    struct Node *node = hash->list[index];
    if(node == NULL){
        hash->list[index] = createNode(key, value);
    } else{
        while(node){
            if (node->next == NULL){
                node->next = createNode(key, value);
                break;
            }
            node = node->next;
        }
    }
};

struct Hash {
    struct Node *list[HASH_SIZE];
};

char* search(struct Hash *hash, char *key){
    unsigned int index = hashCode(key);
    struct Node *node = hash->list[index];
    while(node){
        if(strcmp(node->key, key) == 0){ //string compare
            return node->value;
        }
        node = node->next;
    }
    return "";
}

void main(){
    struct Hash *hash = (struct Hash*) malloc(sizeof(struct Hash));
    insertNode(hash, "hello","world");
    insertNode(hash, "Joao", "Sanchez");

    printf("%s\n", search(hash, "hello"));
    printf("%s\n", search(hash, "Joao"));
}
