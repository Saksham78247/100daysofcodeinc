 #include <stdio.h>

int main(void)
{
	long long number;
	long long divisor = 1;
	long long firstDigit;
	long long lastDigit;

	scanf("%lld", &number);

	if (number < 0) {
		printf("-");
		number = -number;
	}

	if (number < 10) {
		printf("%lld", number);
		return 0;
	}

	while (number / divisor >= 10)
		divisor *= 10;

	firstDigit = number / divisor;
	lastDigit = number % 10;
	number = number - firstDigit * divisor - lastDigit;
	number = number + lastDigit * divisor + firstDigit;

	printf("%lld", number);
	return 0;
}
