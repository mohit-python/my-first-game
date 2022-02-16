#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100 + 1;  //it gives numbers between 1 and 100
    //printf("the number is %d",number);
  do{
        printf("GUESS A NUMBER FROM 1 to 100:\n");
        scanf("%d",&guess);
        if(guess<number){
            printf(" HIGHER NUMBER PLEASE \n");
        }
        else if (guess>number){
            printf(" LOWER NUMBER PLEASE\n"); 
        }
        else{
        printf("CONGRATULATIONS bhagavathi YOU GUESSED IT IN %d ATTEMPTS\n",nguesses);
        } nguesses++;
    }
while(guess!=number);
return 0;
}