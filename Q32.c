#include <stdio.h>

int main(void)
{
    int number, original, reversed = 0, digit;

    scanf("%d", &number);
    original = number;

    if (number < 0)
        number = -number;

    while (number != 0) {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    if (original >= 0 && reversed == original)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}