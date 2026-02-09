#include<stdio.h>
int max(int a, int b)
{
    (a>=b)?printf("%d ----> Big",a):printf("%d ----> Small",a);
}
int main()
{
    max(54,32);
}