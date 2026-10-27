
#include <stdio.h>

struct Student {
    char name[50];
    int rollno;
    float marks;
    char city[50];
    char dream[100];
};

int main() {
    struct Student s[10];
    int i;

    printf("===== STUDENT DETAILS SYSTEM =====\n");

    for (i = 0; i < 10; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Name: ");
        scanf(" %49[^\n]", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollno);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        printf("City: ");
        scanf(" %49[^\n]", s[i].city);

        printf("Dream: ");
        scanf(" %99[^\n]", s[i].dream);
    }

    printf("\n\n===== ALL STUDENT DETAILS =====\n");

    for (i = 0; i < 10; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name       : %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].rollno);
        printf("Marks      : %.2f\n", s[i].marks);
        printf("City       : %s\n", s[i].city);
        printf("Dream      : %s\n", s[i].dream);
    }

    return 0;
}
