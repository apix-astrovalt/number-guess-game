#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    


int random,guess;
int no_count = 0;

srand(time(NULL));
random = rand()%100 +1;

printf("welcome to the number guessing game:\n ");


do{

    printf("guess a number between (1-100):\n");

scanf("%d",&guess);
       no_count++;

       if(guess > random){

        printf("it is big , try to guess small number\n");

       }
else if(guess < random){

    printf("it is  small, try to guess big number\n");

}

else{

    printf("congats,you won the game\n");

    printf("your score is %d\n",no_count);

    printf("made by AVISHEK PAUL");
}

}while(guess != random);


    return 0;
}
