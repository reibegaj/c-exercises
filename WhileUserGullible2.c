#include <stdio.h>

int main() {
	int x;
    int i;

    for (i = 0; i < 11; i++)
    {
        printf("Provide a number different than 5: \n");
        scanf("%d", &x);

        if(x == 5){
            printf("Hey, you weren't supposed to enter 5. \n");
            break;
        }

        else if(i == 10){
            printf("Wow, you're more patient than I am, you win.\n");
            break;
        };
    };

    return 0;
}