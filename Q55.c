// Q55: Print all prime numbers from 1 to n.
#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	for (int number = 2; number <= n; number++) {
		int prime = 1;

		for (int divisor = 2; divisor * divisor <= number; divisor++) {
			if (number % divisor == 0) {
				prime = 0;
				break;
			}
		}

		if (prime) {
			printf("%d ", number);
		}
	}

	return 0;
}
