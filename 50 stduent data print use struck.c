#include <stdio.h>

struct student {
    int roll;
    char name[50];
    int class;
};

int main() {
    struct student s[50];
    int i;

    // Input student data
    for(i = 0; i < 50; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);   // read full name with space

        printf("Class: ");
        scanf("%d", &s[i].class);
    }

    // Print student data
    printf("\n\n--- Student Data ---\n");
    for(i = 0; i < 50; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", s[i].roll);
        printf("Name        : %s\n", s[i].name);
        printf("Class       : %d\n", s[i].class);
    }

    return 0;
}
