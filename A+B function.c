#include <stdio.h>
int sum(int, int);

int sum(int x, int y)
{
    printf("The sum of num %d\n", x + y);
    return (x + y);
}
int main()
{
    {
        int a = 2;
        int b = 3;
        sum(a, b);   
    }
}
