#include <stdio.h>

//1rs = 3 lemons, 2rs = 5 toffees, 7rs = 2 balloons | ex : 90 rs. = 90 items

int main() {
    int money;
    printf("Enter Money : ");
    scanf("%d", &money);

    int combinations = 0;
    for (int lemons = 0; lemons <= money; lemons += 3) {
        for (int toffees = 0; toffees <= money; toffees += 5) {
            for (int balloons = 0; balloons <= money; balloons += 2) {
                if (lemons + toffees + balloons == money) {
                    int cost = (lemons / 3 * 1) + (toffees / 5 * 2) + (balloons / 2 * 7);
                    if (cost == money) {
                        printf("You can get %d Lemons, %d Toffees, %d Balloons.\n", lemons, toffees, balloons);
                        combinations++;
                    }
                }
            }
        }
    }

    if (combinations == 0) {
        printf("Not possible to get %d items in %d rupees.\n", money, money);
    }

    return 0;
}