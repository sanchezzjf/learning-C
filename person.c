#include <stdlib.h>
#include <inttypes.h>
#include <stdio.h>
#include <string.h>

struct Person {
    char name[10];
    uint8_t age;
    uint8_t height;
};

void createPerson(char name[],
    uint8_t age,
    uint8_t height,
    void(*function_pointer)(struct Person)){
        struct Person person;
        strcpy(person.name, "Alfredo");
        person.age = 37;
        person.height = 175;
        (*function_pointer)(person); 
    }

void printPerson(struct Person person){
    printf("Person: %s, %d, %d\n", 
    person.name, person.age, person.height);
}

void main(){
    createPerson("Adalberto", 43, 175, &printPerson);//& <-- passa a referencia pro compilador saber oq fazer

    return;
}