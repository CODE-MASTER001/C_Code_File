#include <stdio.h>
int main()
{
    int x = 5;
    int *ptr = &x;
    printf("%d\n", x);
    *ptr = 10;
    printf("%d\n", x);
    return 0;
}