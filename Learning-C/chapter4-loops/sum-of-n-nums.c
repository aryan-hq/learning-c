#include <stdio.h>
// question : print sum of first n natural numbers and also print them in reverse.

int main () {
    int num;
    int sum = 0;

    printf("Enter number : ");
    scanf("%d", &num);

    // using for loop 

    printf("0 to %d natural numbers in reverse order : \n", num);
    for (int i = num; i >= 0; i--) {
        sum = sum + i;
        printf("%d\n", i);
    }

    printf("%d is the sum of first %d natural numbers.\n", sum, num);

    return 0;

}