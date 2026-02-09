#include <stdio.h>

int square(int *p) {
    return (*p) * (*p);
}

int main() {
    int x = 6;
    printf("Square = %d\n", square(&x));
    return 0;
}
