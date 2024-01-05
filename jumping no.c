#include <stdio.h>


int isJumpingNumber(int num) {
    int prevDigit = -1;

    while (num > 0) {
        int digit = num % 10;

        if (prevDigit != -1 && abs(prevDigit - digit) != 1 && abs(prevDigit - digit) != 0) {
            return 0;  // Not a jumping number
        }

        prevDigit = digit;
        num /= 10;
    }

    return 1;  // It's a jumping number
}

int main() {
    printf("The largest 3-digit jumping number is: ");

    for (int i = 999; i >= 100; i--) {
        if (isJumpingNumber(i)) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}

