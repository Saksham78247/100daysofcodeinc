#include <stdio.h>

int main(void)
{
    int n;
    double sum = 0.0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0;
        } else {
            sum += (double)(2 * i - 1) / (2 * i);
        }
    }

    printf("Approximate sum: %.1f\n", sum);
    return 0;
}