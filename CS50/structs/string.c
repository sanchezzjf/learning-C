#include <stdio.h>

typedef char* string;

string get_string(string string){
    scanf("%s");
    return 0;
}

int main(void){
    string s = "HI!";
    string a = get_string("QUal seu nome? ");
    printf("%s\n", a);
}