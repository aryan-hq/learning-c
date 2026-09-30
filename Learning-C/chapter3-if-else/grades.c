#include <stdio.h>

int main() {
    float marks;
    printf("Enter marks (0-100) : ");
    scanf("%f", &marks);

    if (marks <= 100 && marks >= 0) {
        if (marks < 30) {
            printf("Grade : C");
        }
        else if (marks >= 30 && marks < 70) {
            printf("Grade : B");
        }
        else if (marks >= 70 && marks < 90) {
            printf("Grade : A");
        }
        else if (marks >= 90 && marks <= 100) {
            printf("Grade : A+");
        }
    }
    else {
        printf("Wrong Input");
    }

    return 0;
}
