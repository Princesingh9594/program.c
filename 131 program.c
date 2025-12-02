#include <stdio.h>

enum Day {
    SUNDAY = 0,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    // Array of names for printing
    const char *dayNames[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };

    for (int d = SUNDAY; d <= SATURDAY; d++) {
        printf("%s = %d\n", dayNames[d], d);
    }

    return 0;
}

