#include<stdio.h>
void change(int *n)
{
*n=50;
}
int main()
{
    int x =10;
    printf("%d\n",x);
    change(&x);
    printf("%d\n",x);
}