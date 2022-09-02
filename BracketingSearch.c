#include <stdio.h>
#include <stdlib.h>
int main() {
    srand(time(0));
    // declare the local variables  
    int i; //for variable
    int r; // random number
    int u;  // User inputed variable


    //Random number Generator 
    r = rand() % 100 + 1;  
    printf (" %d ", r); //Printing the random number for testing purposes.

    //Getting and comparing user inputs
    while (r) {
        printf("Take a guess: ");
        scanf("%d", &u);
        printf("\n");

        if (r < u){
            printf("too high \n");
        }

        else if(r > u){
            printf("too low \n");
        }
        else if(r == u){
            printf("Guessed it right \n");
            break;
        };
    };









return 0;
}