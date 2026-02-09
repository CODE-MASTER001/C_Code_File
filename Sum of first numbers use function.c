#include <stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0;   // base case: jab n = 0, to sum = 0
    else
        return n + sum(n - 1);  // recursive case: n + (sum of previous numbers)
}

int main()
{
    int num = 10;
    printf("Sum of first %d numbers = %d\n", num, sum(num));
    return 0;
}
