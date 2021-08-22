#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int phrase;
    printf("Phrase to Upper: ");
    scanf("%s", &phrase);
    char algo = toupper(phrase);
    printf("%s", &algo);
    return 0;
}
