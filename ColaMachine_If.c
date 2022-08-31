#include <stdio.h>

int main() {
	int x;
    const char *drink[5] = {"1.coke \n", "2.water \n", "3.sprite \n", "4.beer \n", "5.vodka \n"};
	
    printf("Select a beverage: \n \n");

    for (int i = 0; i <= 4; i++){
        printf("%s", drink[i]);
    };
    scanf("%d", &x);

	if(x == 1){
		printf("\nHere's your Coke \n");
	}

	else if(x == 2){
		printf("\nHere's your Water \n");
	}

	else if(x == 3){
		printf("\nHere's your Sprite \n");
	}

	else if(x == 4){
		printf("\nHere's your Beer \n");
	}

	else if(x == 5){
		printf("\nHere's your Vodka \n");
	}

	else{
		printf("\nIncorrect choice, valid range is 1-5 \n");
	}

	return 0;
}