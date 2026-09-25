#include <stdio.h>

int main(void)
{
    unsigned int number;
    int bits[sizeof(number) * 8];
    int count = 0;

    scanf("%u", &number);

    if (number == 0) {
        printf("0");
        return 0;
    }

    while (number > 0) {
        bits[count++] = number % 2;
        number /= 2;
    }

    while (count > 0)
        printf("%d", bits[--count]);

    return 0;
}