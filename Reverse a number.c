#include <stdio.h>
int Reverse_a_number(int num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }
    return rev;
}
int main()
{
    int n = 58566942;
    printf("%d", Reverse_a_number(n));
}