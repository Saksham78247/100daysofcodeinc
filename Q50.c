 #include <stdio.h>

int main(void)
{
	for (int row = 0; row < 5; row++) {
		for (int space = 0; space < row; space++) {
			putchar(' ');
		}
		for (int star = 0; star < 5 - row; star++) {
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}

