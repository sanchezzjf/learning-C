#include <stdio.h>

int main(void){
    int score1 = 72;    // 4 bytes(32bits) --> 00000000000000000000000001001000
    int score2 = 73;    // 4 bytes(32bits) --> 00000000000000000000000001001001
    int score3 = 33;    // 4 bytes(32bits) --> 00000000000000000000000000100001

    printf("Average: %f\n", (score1+score2+score3)/ 3.0);
}