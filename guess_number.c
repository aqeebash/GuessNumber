#include <stdio.h>
#include <stdlib.h>

int main(){

    int guess, num=6;

    do
    {
        printf("Enter a digit: ");
        scanf("%d", guess);

        if (guess>num)
        {
            printf("Too high\n");
        } else if(guess<num){
            printf("Too low\n");
        } else{
            printf(" You guessed correctly\n");
        }
        
    } while (guess!=num);
    


    return 0;
}