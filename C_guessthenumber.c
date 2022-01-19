#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number, guess, nguess=1;
    srand(time(0));
    number = rand()%100+1;
    do
    {
        printf("guess the number 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("lower number please\n");
        }
        else if(guess<number){
            printf("larger number please\n");
        }
        else{
            printf("ohh you guessed the number\n In %d attempts",nguess);
        }
        nguess++;
    }while(guess!=number);
return 0;
}