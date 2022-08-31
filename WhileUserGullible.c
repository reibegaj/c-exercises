#include <stdio.h>

int main() {
	int x = 0;
    int y;

    while (x == 1) {
        printf("Give a number different than 5: \n");
        scanf("%d", &y);
        
        if (y == 5) {
            printf("Hey, you weren't supposed to enter 5! \n");
            break;
        }
        else {

        };
    };
return 0;
}