#include <stdio.h>
int main()
{
    int arr[10];
    int n;
    printf("Enter any Num:- ");
    scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
    
        printf("%d x %d = %d\n",n, i + 1, arr[i]);
    }
}