#include <stdio.h>

int main() {
	int score;

	printf("How many points did you get: ");

	scanf("%d", &score);

	printf("%d",score);

	if(score == 100){
		printf("\nYou got a perfect score \n");
	}

	else if(0 <= score && score <= 60){
		printf("\nYou scored an F \n");
	}

	else if(60 < score && score <= 70){
		printf("\nYou scored a D \n");
	}

	else if(70 < score && score <= 80){
		printf("\nYou scored a C \n");
	}

	else if(80 < score && score <= 90){
		printf("\nYou scored a B \n");
	}
	
	else if(90 < score && score < 100){
		printf("\nYou scored a A \n");
	}

	else{
		printf("\nIncorrect number, valid range is 0-100 \n");
	}


	return 0;
}