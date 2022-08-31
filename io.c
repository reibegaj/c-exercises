#include <stdio.h>

int main() {
	int nr1, nr2, sum;

	printf("Enter two integers: ");

	scanf("%d %d", &nr1, &nr2);

	sum = nr1 + nr2;

	/*printf("%d + %d = %d", nr1, nr2, sum);*/

	printf("Calculated sum is: %d", sum);

	return 0;
}