#include <stdio.h>

int main() {
    int num;
    int i = 0;
    
    printf("Enter number : ");
    scanf("%d", &num);

    // using for loop 

    // for (i; i <= num; i++) {
    //     printf("%d \n", i);
    // }

    // using while loop 

    // while (i <= num) {
    //     printf("%d \n", i);
    //     i++;
    // }

    // using do while loop 
    
    do {
        printf("%d\n", i);
        i++;
    } while (i <= num);

    return 0;
}