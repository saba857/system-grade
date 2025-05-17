#include <stdio.h>

int main() {
    char name[50];
    int sub1, sub2, sub3;
    int total;
    float average;
    char grade;
    char status[10];

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter marks for Subject 1: ");
    scanf("%d", &sub1);
    printf("Enter marks for Subject 2: ");
    scanf("%d", &sub2);
    printf("Enter marks for Subject 3: ");
    scanf("%d", &sub3);

    total = sub1 + sub2 + sub3;
    average = total / 3.0;

    if (average >= 80) grade = 'A';
    else if (average >= 60) grade = 'B';
    else if (average >= 40) grade = 'C';
    else grade = 'F';

    if (grade == 'F') sprintf(status, "Fail");
    else sprintf(status, "Pass");

    printf("\n--- Grade Report ---\n");
    printf("Student Name : %s", name);
    printf("Subject 1    : %d\n", sub1);
    printf("Subject 2    : %d\n", sub2);
    printf("Subject 3    : %d\n", sub3);
    printf("Total Marks  : %d\n", total);
    printf("Average      : %.2f\n", average);
    printf("Grade        : %c\n", grade);
    printf("Status       : %s\n", status);

    return 0;
}

