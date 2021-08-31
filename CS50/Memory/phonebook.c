#include <stdio.h>
#include <string.h>

int main(void){
    
    FILE *file = fopen("phonebook.csv", "a"); //FILE = "data type" that needs a pointer to the locantion of the file
    if(file == NULL){
        return 1;
    }
    char name[10];
    char number[20];
    printf("name: ");
    scanf("%s", name);
    printf("number: ");
    scanf("%s", number);

    fprintf(file, "%s, %s\n", name, number);
    fclose(file);
}