#include <stdio.h>
int chk(int x)
{
    if (x % 2 == 0)
        printf("Even");

    else

        printf("odd");
}
int main()
{
    int a = 6;
    chk(a);
}