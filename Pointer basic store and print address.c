#include <stdio.h>
int main()
{
    int x=5;
    int *ptr=&x;
    printf("%d\n",x);
    printf("%p\n",&x);
    printf("%d\n",*ptr);
}