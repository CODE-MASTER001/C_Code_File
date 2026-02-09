#include <stdio.h>
int sumdigit(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}
int main()
{
    int n = 556;
    printf("%d", sumdigit(n));
}