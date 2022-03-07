#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

static bool isPalindrome(char *str);

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: ./palindrome [string]\n");
        exit(1);
    }

    char *str = argv[1];
    if (isPalindrome(str)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return EXIT_SUCCESS;
}

static bool isPalindrome(char *str) {
    int l = 0;
    int r = strlen(str) - 1;
    while (l < r) {
        if (str[l] != str[r]) {
            return false;
        }
        l++;
        r--;
    }

    return true;
}
