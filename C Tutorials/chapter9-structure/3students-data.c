#include <stdio.h>
#include <string.h>

int main() {
    struct student{
        char name[100];
        int roll;
        float cgpa;
    };

    struct student s1;
    s1.roll = 01;
    s1.cgpa = 9.2;
    strcpy(s1.name, "Aman");

    printf("Name : %s\n Roll No.: %d\n CGPA : %.2f\n", s1.name, s1.roll, s1.cgpa);

    struct student s2 = {"Rohan", 02, 6.7};

    printf("Name : %s\n Roll No.: %d\n CGPA : %.2f\n", s2.name, s2.roll, s2.cgpa);

    struct student s3;
    s3.roll = 03;
    s3.cgpa = 2.1;
    strcpy(s3.name, "Tom");

    printf("Name : %s\n Roll No.: %d\n CGPA : %.2f\n", s3.name, s3.roll, s3.cgpa);

    return 0;
}