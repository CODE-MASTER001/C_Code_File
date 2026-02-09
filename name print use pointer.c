#include <stdio.h>

int main() {
    char ch1 = 'N',ch2 = 'I',ch3 = 'K',ch4 = 'H',ch5 = 'I',ch6= 'L';
    char *p1 = &ch1;
    char *p2 = &ch2;
    char *p3 = &ch3;
    char *p4 = &ch4;
    char *p5 = &ch5;
    char *p6 = &ch6;

    printf("Character = %c%c%c%c%c%c\n", *p1,*p2,*p3,*p4,*p5,*p6);
    return 0;
}


