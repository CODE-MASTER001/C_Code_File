#include <stdio.h>
int main()
{
    int a, b, choice;
    printf("Enter two digets:\n");
    scanf("%d %d", &a, &b);
    printf("Choose operation:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Result = %d", a + b);
        break;
    case 2:
        printf("Result =%d", a - b);
        break;
    case 3:
        printf("Result =%d", a * b);
        break;
    case 4:
    if(a!=0 && b!=0)
        printf("Result =%d", a / b);
        else
        printf("Division by zero not allowed!");
        break;
    default:
        printf("Worng Value Enter");
        break;
    }
}