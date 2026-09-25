// Q33: Check whether a number is an Armstrong number.
#include <stdio.h>

int main(void)
{
	int number, original, digits = 0, remainder;
	long long sum = 0, power;

	scanf("%d", &number);

	if (number < 0) {
		printf("Not Armstrong");
		return 0;
	}

	original = number;
	if (number == 0)
		digits = 1;
	else {
		for (int temp = number; temp != 0; temp /= 10)
			digits++;
	}

	for (int temp = number; temp != 0; temp /= 10) {
		remainder = temp % 10;
		power = 1;
		for (int i = 0; i < digits; i++)
			power *= remainder;
		sum += power;
	}

	if (sum == original)
		printf("Armstrong");
	else
		printf("Not Armstrong");

	return 0;
}
