#include <stdio.h>

void draw(int h);
void recursiveDraw(int h);

int main(void){
    int height;
    printf("height: ");
    scanf("%d", &height);

    recursiveDraw(height);
    //draw(height);
}

void recursiveDraw(int h){
    if(h == 0){
        return;
    }
    recursiveDraw(h -1);

    for(int i=0;i<h;i++){
        printf("#");
    }
    printf("\n");
}

void draw(int h){
    for(int i=1;i<=h;i++){
        for(int j=1;j<=i;j++){
            printf("#");
        }
        printf("\n");
    }
}