#include <stdio.h>

int lenstring(char arr[]);

int main() {
    char name[100];
    printf("Enter Name : ");
    fgets(name, 100, stdin);
    printf("Length of your name : %d ", lenstring(name));
    return 0;
}

int lenstring(char arr[]) {
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++) {
        if((arr[i] <= 'Z' && arr[i] >= 'A') || (arr[i] <= 'z' && arr[i] >= 'a')) {
            count++;
        }
    }
    return count;
}