 #include <stdio.h>

int main(void)
{
	for (int row = 1; row <= 5; row++) {
		for (int value = 6 - row; value <= 5; value++) {
			printf("%d", value);
		}
		printf("\n");
	}

	return 0;
}
