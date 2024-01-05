#include <stdio.h>

int Happy(int n) {
    int sum = 0, digit;

    while (n > 0) {
        digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }

    if (sum == 1) {
        return 1;
    //unhappy number ends in a cycle of repeating numbers which contains 4
    } else if (sum == 4) {
        return 0;
    } else {
        return Happy(sum);
    }
}

int main() {
    printf("2-Digit Happy Numbers:\n");

    for (int n = 10; n < 100; n++) {
        if (Happy(n)) {
            printf("%d\n", n);
        }
    }

    return 0;
}
