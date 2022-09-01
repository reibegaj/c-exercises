#include <stdio.h>

int main() {
	int nr[10];
    int i;
    int j; 
    int max = 0;
    int maxPer = 0;

    printf("How many pancakes did you eat: \n");
    
    for (i = 0; i < 10; i++){
        printf("Person %d",i+1);
        printf(" ate: \n");

        scanf("%d", &nr[i]);
    
        printf("%d", nr[i]);
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
    };
    
    printf("Numri me i madh i pancake: ");
    printf("%d", max);
    printf("\nPersoni: ");
    printf("%d", maxPer + 1);
    printf("\n");
return 0;
}