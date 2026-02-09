#include <stdio.h>

int* getAddress(int *p) {
    return p;   // same pointer return
}

int main() {
    int x = 100;
    int *ptr = getAddress(&x);

    printf("%d", *ptr);
    return 0;
}
