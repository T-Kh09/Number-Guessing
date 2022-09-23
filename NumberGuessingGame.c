#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand (time(0));
    int num = (rand() % 100) + 1;
    int guess = 0;
    int guesses = 0;
    do
    {
        printf("\nEnter a guess between 1 and 100: ");
        scanf ("%d", &guess);
        if (guess > num)
        {
            printf("Too high!");
        }
        else if (guess < num)
        {
            printf("Too low!");
        }
        else{
            printf("\nYou guessed right!");
        }

        guesses ++;
    } while (num != guess);
    printf("\n**********************");
    printf("\nanswer: %d", num);    
    printf("\nguesses: %d", guesses);
    printf("\n**********************");
    return 0;

}