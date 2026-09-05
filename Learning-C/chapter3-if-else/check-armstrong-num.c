#include <stdio.h>
#include <math.h>

int main() {
    int num;
    int count = 0;
    int remainder;
    double result = 0;

    printf("Enter number : ");
    scanf("%d", &num);

    //to count no. of digits.
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        count++;
    }

    //to check for armstrong number.
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += round(pow(remainder, count));
        temp /= 10;
    }

    //printing output
    if ((int)result == num) {
        printf("%d is an armstrong number.", num);
    } else {
        printf("%d is not an armstrong number.", num);
    }

    return 0;
}