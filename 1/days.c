#include <stdlib.h>
#include <stdio.h>

char *numToDay(int n);

int main(int argc, char *argv[]) {

    int num = atoi(argv[1]);

    printf("%s\n", numToDay(num));

    return EXIT_SUCCESS;
}

char *numToDay(int n) {
    char *day;
    if (n == 0) {
        day = "Sun";
    } else if (n == 1) {
        day = "Mon";
    } else if (n == 2) {
        day = "Tue";
    } else if (n == 3) {
        day = "Wed";
    } else if (n == 4) {
        day = "Thu";
    } else if (n == 5) {
        day = "Fri";
    } else if (n == 6) {
        day = "Sat";
    }
    return day;
}


char *numToDaySwitch(int n) {
    switch (n) {
        case 0: return "Sun";
        case 1: return "Mon";
        case 2: return "Tue";
        case 3: return "Sun";
        case 4: return "Sun";
        case 5: return "Sun";
        case 6: return "Sun";
        default: return "n/a";
    }
}
