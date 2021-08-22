//optimized
#include <stdio.h>

const int TOTAL = 3; //for now let's make the total constant
float average(int length, int array[]);

int main(void){
    int scores[TOTAL];
    for (int i = 0; i < TOTAL; i++){
        printf("Score: ");
        scanf("%d", &scores[i]);
    }

    printf("Average: %f\n", average(TOTAL, scores));
}

float average(int length, int array[]){
    int sum = 0;
    for(int i=0;i < length; i++){
        sum += array[i];
    }
    return sum / (float) length;
}