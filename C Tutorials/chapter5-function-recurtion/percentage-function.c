#include <stdio.h>

float percentage(float science, float maths, float english);

int main() {
    float maths, science, english;
    printf("Enter English Marks : ");
    scanf("%f", &english);
    printf("Enter Science Marks : ");
    scanf("%f", &science);
    printf("Enter Maths Marks : ");
    scanf("%f", &maths);

    printf("Percentage : %.2f", percentage(science, maths, english));

    return 0;
}

float percentage(float science, float maths, float english) {
    float percentage = (science + maths + english) / 3;
    return percentage;
}