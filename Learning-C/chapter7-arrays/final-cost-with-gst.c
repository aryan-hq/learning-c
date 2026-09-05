#include <stdio.h>

int main() {

    float price[3];

    printf("Enter price :");
    scanf("%f", &price[0]);
    printf("Enter price :");
    scanf("%f", &price[1]);
    printf("Enter price :");
    scanf("%f", &price[2]);

    float final_cost = ( price[0] + price[1] + price[2] ) * 0.18;
    printf("Final cost : %.2f", final_cost);

    return 0;
}