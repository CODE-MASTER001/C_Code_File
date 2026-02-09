#include <stdio.h>

void sum(int a, int b) {
    int s = a + b;
    printf("The sum is %d\n", s);
}

void average(int a, int b) {
    float avg = (a + b) / 2.0;
    printf("The average is %.2f\n", avg);
}

int main() {
    int x = 4;
    int y = 6;

    sum(x, y);
    average(x, y);

    return 0;
}
