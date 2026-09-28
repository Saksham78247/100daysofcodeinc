#include <stdio.h>

int main(void)
{
	int number, sum = 0;

	scanf("%d", &number);

	for (int divisor = 1; divisor <= number / 2; divisor++) {
		if (number % divisor == 0) {
			sum += divisor;
		}
	}

	if (number > 0 && sum == number) {
		printf("Perfect number");
	} else {
		printf("Not perfect number");
	}

	return 0;
}

