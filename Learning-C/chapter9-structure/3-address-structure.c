#include <stdio.h>
#include <string.h>

struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printadd(struct address add);

int main() {
    struct address adds[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter info fro person %d : ", i+1);
        scanf("%d", &adds[i].houseNo);
        scanf("%d", &adds[i].block);
        scanf("%s", &adds[i].city);
        scanf("%s", &adds[i].state);
    }

    printadd(adds[0]);
    printadd(adds[1]);
    printadd(adds[2]);

    return 0;
}

void printadd(struct address add) {
    printf("Address : %d, %d, %s,%s\n", add.houseNo, add.block, add.city, add.state);
}