#include <stdio.h>

int main() {
	int nr[10];
    int i;
    int j; 
    int max = 0;
    int maxPer = 0;
    int min = 100000;
    int minPer = 0;

    printf("How many pancakes did you eat: \n");
    
    for (i = 0; i < 10; i++){
        printf("Person %d",i+1);
        printf(" ate: \n");

        scanf("%d", &nr[i]);
    
        printf("\n");

        if(nr[i] > max){
        max = nr[i];
        maxPer = i;
        //printf("Variabla me e madhe: ");
        //printf("%d", max);
        //printf("\n");
        //printf("Personi: ");
        //printf("%d", maxPer + 1);
        //printf("\n");
        };

        if(nr[i] < min){
            min = nr[i];
            minPer = i;
        };
    };
    
    printf("Numri me i madh i pancake: ");
    printf("%d", max);
    printf("\nPersoni: ");
    printf("%d", maxPer + 1);
    printf("\n");

    printf("Numri me i vogel i pancakes: ");
    printf("%d", min);
    printf("\nPersoni: \n");
    printf("%d", minPer + 1);
    printf("\n");

    int temp = 0;
    int length = sizeof(nr) / sizeof(nr[0]);

    for (int i = 0; i < length; i++) {     
        for (int j = i+1; j < length; j++) {     
           if(nr[i] < nr[j]) {    
               temp = nr[i];    
               nr[i] = nr[j];    
               nr[j] = temp;    
           }     
        }     
    }    
    printf("\n");    
    //Displaying elements of array after sorting    
    for (int i = 0; i < length; i++) {     
        printf("Person %d",i + 1);
        printf(" ate: \n");
        printf("%d ", nr[i]);
        printf("\n");   
    }    

    printf("End!");
return 0;
}