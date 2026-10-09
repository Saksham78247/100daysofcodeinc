#include <stdio.h>

int main(void)
{
    int n;
    int positive = 0, negative = 0, zero = 0;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);

        if (value > 0) {
            positive++;
        } else if (value < 0) {
            negative++;
        } else {
            zero++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);
    return 0;
}