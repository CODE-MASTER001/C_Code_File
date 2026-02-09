#include <stdio.h>

int power(int a, int b) {
    int p = 1;
    for (int i = 1; i <= b; i++)
        p = p * a;
    return p;
}

int main() {
    int a = 2, b = 5;
    printf("%d^%d = %d\n", a, b, power(a, b));
    return 0;
}
