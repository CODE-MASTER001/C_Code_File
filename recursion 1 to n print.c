// Ascending recursion:

#include <stdio.h>

void printAsc(int n) {
    if(n == 0) return;        // base case
    printAsc(n - 1);          // recursive call
    printf("%d ", n);
    
}
// Descending recursion

void printdes(int num) {
    if(num == 0) return;        // base case
    printf("%d ", num);
    printdes(num - 1);          // recursive call
}

int main() {
    printAsc(5);
    printf("\n");
    printdes(5);
    return 0;
}