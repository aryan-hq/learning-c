#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("student.txt", "w");

    int stdnum;
    printf("Number of students : ");
    scanf("%d", &stdnum);

    for (int i = 0; i < stdnum; i++) {
        char name[100];
        int age;
        float cgpa;

        printf("Enter Name of student %d : ", i+1);
        scanf("%s", &name);
        printf("Enter Age of student %d : ", i+1);
        scanf("%d", &age);
        printf("Enter CGPA of student %d : ", i+1);
        scanf("%f", &cgpa);
        printf("\n");

        fprintf(fptr, "Student Name : %s, ", name);
        fprintf(fptr, "Age : %d, ", age);
        fprintf(fptr, "CGPA : %f ", cgpa);
        fprintf(fptr, "\n");

    }
    fclose(fptr);
    return 0;
}