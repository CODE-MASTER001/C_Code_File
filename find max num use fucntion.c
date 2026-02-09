#include <stdio.h>
int mix(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
int main()
{
    int x = 55;
    int y = 9;
    printf("%d Max num", mix(x,y));
}