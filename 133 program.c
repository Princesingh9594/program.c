#include <stdio.h>

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    const char *monthNames[] = {
        "",  // dummy to align index (ignore index 0)
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    int daysInMonth[] = {
        0,  // dummy
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    for (int m = JANUARY; m <= DECEMBER; m++) {
        printf("%s has %d days\n", monthNames[m], daysInMonth[m]);
    }

    return 0;
}

