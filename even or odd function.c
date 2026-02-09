// #include <stdio.h>

// int even(int a)
// {
//     if (a % 2 == 0)
//         printf("Even");
//     else
//         printf("Odd");
// }
// int main()
// {
//     even(4);
// }




// Use turnary oprator
#include <stdio.h>

int even(int a)
{
    (a % 2 == 0)?printf("Even"):printf("Odd");
        
}
int main()
{
    even(5);
}