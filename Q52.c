 #include <stdio.h>

int main(void)
{
	int groups[] = {1, 3, 5, 3, 1};
	int group_count = sizeof(groups) / sizeof(groups[0]);

	for (int i = 0; i < group_count; i++) {
		for (int j = 0; j < groups[i]; j++) {
			printf("*\n");
		}

		if (i < group_count - 1) {
			printf("\n");
		}
	}

	return 0;
}
