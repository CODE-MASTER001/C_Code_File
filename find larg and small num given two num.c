#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter any 2 numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Largest = %d Smaller = %d", a, b);
    else
        printf("Largest = %d Smaller = %d", b, a);

    return 0;
}
