#include <stdio.h>

int main() {
    int num, temp;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Frequency of all digits:\n");

    int i = 0;
    
    while (i <= 9) {
        int count = 0;
        temp = num;

        if (num == 0 && i == 0) {
            count = 1;
        } 
        else {
            while (temp > 0) {
                int last_digit = temp % 10;
                
                if (last_digit == i) {
                    count++;
                }
                
                temp /= 10;
            }
        }

        if (count > 0) {
            printf("Frequency of %d : %d \n", i, count);
        }

        i++;
    }

    return 0;
}