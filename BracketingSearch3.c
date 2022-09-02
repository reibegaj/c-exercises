#include <stdio.h>
#include <stdlib.h>
int main() {
    srand(time(0));
    // declare the local variables  
    int i; //While variable
    int r; // random number
    int u;  // User inputed variable
    
    //Random number Generator 
    r = rand() % 100 + 1;  
    printf (" %d ", r); //Printing random number for testing purposes.

    //Getting and comparing user inputs
    while (r) {
    printf("%d", r);
    printf("\nTell me if my guess is "" 1-too high "","" 2-too low "" or ""3-correct""\n");
    scanf("%d", &u);
    i++;

        if(u == 1){
           r = r - 1;
        }
        else if(u == 2){
            r = r + 1;
        }
        else if(u == 3){
            printf("\nWow, I guessed it right!\n");
            printf("It took me %d", i);
            printf(" times to get it right\n");
            break;
        };
    };

return 0;
}