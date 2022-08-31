#include <stdio.h>

int main() {
	int x;
    const char *drink[5] = {"1.coke \n", "2.water \n", "3.sprite \n",
	 "4.beer \n", "5.vodka \n"};
	
    printf("Select a beverage: \n \n");

    for (int i = 0; i <= 4; i++){
        printf("%s", drink[i]);
    };
    scanf("%d", &x);

	printf("%d",x);

	switch(x)	{
		case 1:
			printf("\nHere's your Coke. ");
			break;
		case 2:
			printf("\nHere's your Water. ");
			break;
		case 3:
			printf("\nHere's your Sprite. ");
			break;
		case 4:
			printf("\nHere's your Beer. ");
			break;
		case 5:
			printf("\nHere's your Vodka. ");
			break;
		default:
			printf("\nIncorrect number, valid range 1-5. ");
	};
	return 0;
}