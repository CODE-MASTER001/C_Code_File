#include <stdio.h>

int main()
{
    int i, j;
    char ch;

    for (i = 1; i <= 5; i++)
    {             // total 6 line
        ch = '5'; // har line A se start hogi
        for (j = 1; j <= i; j++){

            printf("%c", ch);
        ch--; // next character
    }
    printf("\n"); // next line
}
    return 0;
}
