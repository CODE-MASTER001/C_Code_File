#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
int main()
{   
    int a=3;
    printf("%d", fact(a));
    return 0;
}
