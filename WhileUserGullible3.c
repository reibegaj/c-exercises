#include <stdio.h>

int main() {
	int x;
    int i;

    for (i = 0; x != (i - 1); i++) {
        printf("\nProvide a number different than: %d \n", i);
        scanf("%d", &x);
        printf("\n");
    };
    printf("Hey, you weren't supposed to enter: %d", x);
};