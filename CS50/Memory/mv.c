#include <stdio.h>
#include <stdlib.h>

typedef u_int8_t BYTE;

int main(int argc, char *argv[]){
    if(argc != 3){
        printf("Usage: mv <file> <destination>");
        return 1;
    }
    FILE *file = fopen(argv[1], "r");
    if(!file){
        printf("No such file %s", argv[1]);
        return 1;
    }
    FILE *destination = fopen(argv[2], "w");
    if(!destination){
        fclose(file);
        printf("No such path %s", argv[2]);
        return 1;
    }
    BYTE buffer;
    while(fread(&buffer, sizeof(BYTE), 1, file)){
        fwrite(&buffer, sizeof(BYTE), 1, destination);
    }
    //it is not working
    
    while(fread(&file, sizeof(BYTE), 1, buffer)){
        fwrite(&file, sizeof(BYTE),1, NULL);
    }

    fclose(file);
    fclose(destination);
    return 0;
}