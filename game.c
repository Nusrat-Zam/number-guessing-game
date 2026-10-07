#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    srand(time(NULL));

    int number =rand()%100+1;
    
    int attempts;
    scanf("%d",&attempts);
    int guess;

    for (int i=0;i<attempts;i++){
        scanf("%d",&guess);
        if (guess>number){
            printf("Too high\n");
        }
        else if (guess<number){
            printf("Too Low\n");

        }
        else{
            printf("correct\n");
            break;
        }

    }




    return 0;
}