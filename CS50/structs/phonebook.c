#include <stdio.h>
#include <string.h>

//defining my own data type like "int"
typedef struct{
    char* name;
    char* number;
} person;

int main(void){
    person people[2];

    people[0].name = "Joao";
    people[0].number = "+55-14-99873-8012";
    people[1].name = "Jorge";
    people[1].number = "+55-14-93300-4333";
    for(int i=0;i<2;i++){
        if(strcmp(people[i].name, "Joao")==0){
            printf("Found the number: %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
