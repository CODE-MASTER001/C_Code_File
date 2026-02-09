#include <stdio.h>

int countDigits(int n) {
    if (n == 0) return 1;
    int c = 0;
    while (n > 0) {
        c++;
        n = n / 10;
    }
    return c;
}

int main() {
    int n = 98765;
    printf("Digits = %d\n", countDigits(n));
    return 0;
}
