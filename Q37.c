#include <stdio.h>

int main(void)
{
    int a, b, x, y, gcd;

    scanf("%d %d", &a, &b);

    x = a < 0 ? -a : a;
    y = b < 0 ? -b : b;

    while (y != 0) {
        int remainder = x % y;
        x = y;
        y = remainder;
    }

    gcd = x;
    if (gcd == 0)
        printf("0");
    else
        printf("%d", (a / gcd) * b < 0 ? -((a / gcd) * b) : (a / gcd) * b);

    return 0;
}