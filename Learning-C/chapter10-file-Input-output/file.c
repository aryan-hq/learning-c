#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("text.txt", "r");
    char ch;
    if (fptr == NULL) {
        printf("File doesn't exist");
    } else {
        fscanf(fptr, "%c", &ch);
        printf("%c", ch);
        fclose(fptr);
    }

    fptr = fopen("text.txt", "w");
    fprintf(fptr, "%s", "Mango");
    fclose(fptr);

    fptr = fopen("text.txt", "a");
    fprintf(fptr, "%s", " Banana");
    fclose(fptr);

    return 0;
}