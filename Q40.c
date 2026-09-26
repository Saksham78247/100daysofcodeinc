#include <stdio.h>

int main(void)
{
	char binary[1000];

	if (scanf("%999s", binary) != 1) {
		return 1;
	}

	for (int i = 0; binary[i] != '\0'; ++i) {
		binary[i] = (binary[i] == '0') ? '1' : '0';
	}

	puts(binary);
	return 0;
}
