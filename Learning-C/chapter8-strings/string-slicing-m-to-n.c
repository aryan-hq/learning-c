#include <stdio.h>

void slicing(char str[], int n, int m);

int main() {
    char str[100];
    int n, m;
    printf("Enter : ");
    fgets(str, 100, stdin);
    printf("Slicing strat from : ");
    scanf("%d", &n);
    printf("Slicing end at : ");
    scanf("%d", &m);

    slicing(str, n, m);
}

void slicing(char str[], int n, int m) {
    char newstr[100];
    int j = 0;
    for (int i = n; i <= m; i++) {
        newstr[j] = str[i];
        j++;
    }
    newstr[j] = '\0';
    printf(newstr);
}