#include <stdio.h>
int main()
{
    int n = 5;
    int j, i,space;
    for (i = 1; i <= n; i++)
    {
        for (space = 0; space < i; space++)
            printf(" ");
        
            for (j = n; j >= i; j--)
            {
                printf("*");
            }
        
        printf("\n");
    }
}
