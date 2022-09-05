#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int count = 0; 
    int lborder = 0;
    int hborder = 100;
    int guess = 50;
    int answer = 0;
    int i = 0;
    
    
    while(i == 0) {
        count++;
        printf("\nTell me if my guess is "" 1-too high "","" 2-too low "" or ""3-correct %d \n",guess);
        scanf("%d", &answer);

       if (answer == 1){
           hborder = guess;
           guess = round((lborder + guess)/2);
       }

       else if(answer == 2){
            lborder = guess;
            guess = (round(hborder + guess)/2);
       }

       else if(answer == 3){
            printf("\nWow, I guessed it right!\n");
            printf("It took me %d", count);
            printf(" times to get it right\n");
            break;
       };
    }

return 0;
};