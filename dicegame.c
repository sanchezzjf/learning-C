#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>


int rollDice(){
    int results[3] = {};
    for(int i=0;i<3;++i){
        int diceRoll = ((arc4random()%6)+1);
        results[i]= diceRoll;
    }
    int sum = results[0] + results[1] + results[2];
    printf("results: %d, %d, %d\n", results[0], results[1], results[2]);
    return sum;
}
int *isValidAnswer(char answer, int r1, int r2){
    char *validChar = "hls";
    if(r1<r2){
        if(answer == validChar[0]){
            printf("Nice!\n");
            printf("r1<r2\n");
            return true;
        }else if(answer == validChar[2] || validChar[1]){
            printf("wrong, sorry\n");
            printf("r1<r2\n");
            return false;
        } else{
            printf("invalid answer\n");
            printf("r1<r2\n");
            return false;
        }
    }
    if(r1>r2){
        if(answer == validChar[1]){
            printf("Nice!\n");
            printf("r1>r2\n");
            return true;
        }else if(answer == validChar[2] || validChar[0]){
            printf("wrong, sorry\n");
            printf("r1>r2\n");
            return false;
        } else{
            printf("invalid answer\n");
            printf("r1>r2\n");
            return false;
        }
    }
    if(r1==r2){
        if(answer == validChar[2]){
            printf("Nice!\n");
            printf("r1==r2\n");
            return true;
        }else if(answer == validChar[0] || validChar[1]){
            printf("wrong, sorry\n");
            printf("r1==r2\n");
            return false;
        } else{
            printf("invalid answer\n");
            printf("r1==r2\n");
            return false;
        }
    }
    return false;
}
int playAgain(){
    char again[1];
    char *yn = "yn";
    printf("Wanna play again?[y/n] ");
    scanf("%c", again);
    if(again == yn[0]){
        main();
    }else if(again == yn[1]){
        return 0;
    } 
    return 0;
}

int main(){
    printf("the dice will be thrown 3 times and it will be given the sum of the results.\n");
    int r1 = rollDice();
    printf("sum: %d\n", r1);
    printf("Try to guess if the next sum will be higher, lower or the same.\n");
    printf("Type h to higher and l to lower or s to same.\n");
    char answer;
    printf("A: ");
    scanf("%c", &answer);
    int r2 = rollDice();
    isValidAnswer(answer, r1, r2);
    int score = 0;
    if(isValidAnswer(answer, r1, r2)){
        score++;
    }
    printf("sum: %d\n", r2);
    printf("score: %d\n", score);

    
    return 0;
}


