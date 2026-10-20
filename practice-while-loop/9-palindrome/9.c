#include <stdbool.h>
bool isPalindrome(int x) {
    if (x >= 0) {
        int cpy = x;
        long reverse = 0;

        while (cpy > 0) {
            reverse = (reverse * 10) + cpy % 10;
            cpy /= 10;
        }

        if (reverse == x) {
            return 1;
        } else return 0;

    } else {
        return 0;
    }
}