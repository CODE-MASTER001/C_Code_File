#include <stdio.h>
int main()
{
    int f = 0, s = 1, t;
    int n, i;
    printf("Enter no of term to print:");
        scanf("%d", &n);
        printf("%d %d", f, s);
    for (i = 1; i <= n - 2; i++)
    {
        t = f + s;
        printf("%d\n", t);
        f = s;
        s = t;
    }
}
