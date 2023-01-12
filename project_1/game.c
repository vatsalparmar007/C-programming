//Guess the number the number game 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main(){
        int number, guess,nguesses=1;
        srand(time(0));
        number = rand()%100+1;//genrates random number from 1-100
        // printf("the number is %d\n",number);
        // keep running the loop until the number is guessed
        do{
            printf("Guess the number from 1-100\n");
            scanf("%d",&guess);
            if(guess>number){
                printf("Lower the number\n");
            }
            else if(guess<number){
                printf("Higher the number\n");
            }
            else{
                printf("you guessed the number in %d attempts\n",nguesses);
            }
            nguesses++;
        }while(guess!=number);
    return 0;
}